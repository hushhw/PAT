/*
1057. ����Ҽ(20)

����һ�����Ȳ�����105���ַ���������Ҫ���㽫��������Ӣ����ĸ����ţ���ĸa-z��Ӧ���1-26�����ִ�Сд����ӣ��õ�����N��Ȼ���ٷ���һ��N�Ķ����Ʊ�ʾ���ж���0������1��
��������ַ�����PAT (Basic)��������ĸ���֮��Ϊ��16+1+20+2+1+19+9+3=71����71�Ķ�������1000111������3��0��4��1��

�����ʽ��

������һ���и������Ȳ�����105���Իس��������ַ�����

�����ʽ��

��һ�����Ⱥ����0�ĸ�����1�ĸ���������Կո�ָ���

����������
PAT (Basic)
���������
3 4
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int sum=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] = s[i] +'a'-'A';
		}
		if(s[i]>='a'&&s[i]<='z'){
			//cout<<"s:"<<s[i]<<endl;
			sum += (s[i]-'a'+1);
			//cout<<"s:"<<sum<<endl;
		}
	}
	//cout<<sum<<endl;
	int num=0, num0=0, num1=0;
	while(sum){
		num = sum%2;
		sum = sum/2;
		if(num)
			num1++;
		else
			num0++;
	}
	cout<<num0<<" "<<num1<<endl;
	system("pause");
	return 0;
}