/*
1048. ���ּ���(20)

����Ҫ��ʵ��һ�����ּ��ܷ�����
���ȹ̶�һ��������������A������һ������B������ÿ1λ������A�Ķ�Ӧλ���ϵ����ֽ����������㣺
������λ����Ӧλ��������Ӻ��13ȡ�ࡪ��������J����10��Q����11��K����12��
��ż��λ����B�����ּ�ȥA�����֣������Ϊ���������ټ�10���������λΪ��1λ��

�����ʽ��

������һ�������θ���A��B����Ϊ������100λ��������������Կո�ָ���

�����ʽ��

��һ����������ܺ�Ľ����

����������
1234567 368782971
���������
3695Q8118
*/
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b;
	int lena = a.length(), lenb = b.length();
	for (int i = 0; i <= lena / 2 - 1; i++)
		swap(a[i], a[lena-1-i]);
	for (int i = 0; i <= lenb / 2 - 1; i++)
		swap(b[i], b[lenb-1-i]);
	if (lena > lenb)
		b.append(lena - lenb, '0');
	else
		a.append(lenb - lena, '0');
	char str[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
	for (int i = 0; i < a.length(); i++) {
		if (i % 2 == 0) {
			c += str[(a[i] - '0' + b[i] - '0') % 13];
		} else {
			int temp = b[i] - a[i];
			if (temp < 0) temp = temp + 10;
			c += str[temp];
		}
	}
	for (int i = c.length() - 1; i >= 0; i--)
		cout << c[i];
	system("pause");
	return 0;
}

/* ��д�ķǳ�����AC�档��������Ҫѧ��c++��׼����ĺ�����
char jishu[13] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};

int main(){
	string a,b;
	cin>>a>>b;
	int lena=a.length(), lenb=b.length();
	if(lena<lenb){
		for(int i=0; i<lenb-lena; i++)
			a += '0';
		int j=0;
		for(int i=lenb-1; i>=0; i--){
				if(j%2==0){
					int sum=0;
					if(j<=lena-1)
						sum=(b[i]-'0'+a[lena-1-j]-'0')%13;
					else
						sum=(b[i]-'0'+a[j]-'0')%13;
					b[i] = jishu[sum];
				}else{
					int sum=0;
					if(j<=lena-1)
						sum=b[i]-a[lena-1-j];
					else
						sum=b[i]-a[j];
					if(sum<0)
						sum+=10;
					b[i] = jishu[sum];
				}
				j++;
		}
		cout<<b;
	}else{
		for(int i=0; i<lena-lenb; i++)
			b += '0';
		int j=0;
		for(int i=lena-1; i>=0; i--){
			if(j%2==0){
				int sum=0;
				if(j<=lenb-1)
					sum=(a[i]-'0'+b[lenb-1-j]-'0')%13;
				else
					sum=(a[i]-'0'+b[j]-'0')%13;
				a[i] = jishu[sum];
			}else{
				int sum=0;
				if(j<=lenb-1)
					sum=b[lenb-1-j]-a[i];
				else
					sum=b[j]-a[i];
				if(sum<0)
					sum+=10;
				a[i] = jishu[sum];
			}
			j++;
		}
		cout<<a;
	}
	system("pause");
	return 0;
}
*/