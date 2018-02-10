/*
1048. 数字加密(20)

本题要求实现一种数字加密方法。
首先固定一个加密用正整数A，对任一正整数B，将其每1位数字与A的对应位置上的数字进行以下运算：
对奇数位，对应位的数字相加后对13取余——这里用J代表10、Q代表11、K代表12；
对偶数位，用B的数字减去A的数字，若结果为负数，则再加10。这里令个位为第1位。

输入格式：

输入在一行中依次给出A和B，均为不超过100位的正整数，其间以空格分隔。

输出格式：

在一行中输出加密后的结果。

输入样例：
1234567 368782971
输出样例：
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

/* 我写的非常长的AC版。。。还是要学好c++标准库里的函数啊
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