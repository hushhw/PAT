/*
1024. ��ѧ������ (20)

��ѧ�������ǿ�ѧ��������ʾ�ܴ���С�����ֵ�һ�ַ���ķ�����������������ʽ[+-][1-9]"."[0-9]+E[+-][0-9]+�������ֵ���������ֻ��1λ��С������������1λ�������ּ���ָ�����ֵ������ż�ʹ������Ҳ�ض���ȷ������

���Կ�ѧ�������ĸ�ʽ����ʵ��A�����д������ͨ���ֱ�ʾ�����A������֤������Чλ����������

�����ʽ��

ÿ���������1��������������һ���Կ�ѧ��������ʾ��ʵ��A�������ֵĴ洢���Ȳ�����9999�ֽڣ�����ָ���ľ���ֵ������9999��

�����ʽ��

��ÿ��������������һ���а���ͨ���ֱ�ʾ�����A������֤������Чλ��������������ĩβ��0��

��������1��
+1.23400E-03
�������1��
0.00123400
��������2��
-1.2E+10
�������2��
-12000000000
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string str;
	while(cin>>str){
		if(str[0]=='-')
			cout<<str[0];
		int len = str.length();
		int pose = 0;	//���E����λ��
		for(int i=1; i<len; i++){
			if(str[i]=='E')
				pose = i;
		}
		int after = 0;
		for(int i=pose+2; i<len; i++){
			after = (str[i] - '0') + 10*after;
		}

		if(str[pose+1]=='-'){
			if(after>0){
				cout<<"0.";
				for(int i=1; i<after; i++)
					cout<<0;
				for(int i=1; i<pose; i++){
					if(str[i]>='0' && str[i]<='9')
						cout<<str[i];
				}
			}else {
				for(int i=1; i<pose; i++){
					if(i==2)
						cout<<".";
					if(str[i]>='0' && str[i]<='9')
						cout<<str[i];
				}
			}
		}else {
			if(after > pose - 3){   //pose-3����С����������λ��
				if(str[1] != '0')
					cout<<str[1];
				for(int i=3; i<pose; i++){
					if(str[i]>='0' && str[i]<='9')
						cout<<str[i];
				}
				for(int i=0; i<after-(pose-3); i++)
					cout<<0;
			}else {
				if(str[1]!='0')
					cout<<str[1];
				for(int i=3; i<pose; i++){
					if(i==3+after)
						cout<<".";
					if(str[i]>='0' && str[i]<='9')
						cout<<str[i];
				}
			}
		}
	}
	return 0;
}