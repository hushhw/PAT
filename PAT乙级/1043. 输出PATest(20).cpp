/*
1043. ���PATest(20)

����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ�����
�뽫�ַ����µ���˳�򣬰���PATestPATest....��������˳������������������ַ���
��Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������

�����ʽ��

������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����

�����ʽ��

��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�

����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
PATestPATestPTetPTePePee
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string str,s;
	cin>>str;
	int pp=0, aa=0, tt=0, ee=0, ss=0, t=0;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='P') pp++;
		else if(str[i]=='A') aa++;
		else if(str[i]=='T') tt++;
		else if(str[i]=='e') ee++;
		else if(str[i]=='s') ss++;
		else if(str[i]=='t') t++;
	}
	while(pp+aa+tt+ee+ss+t){
		if(pp){
			cout<<"P";
			pp--;
		}
		if(aa){
			cout<<"A";
			aa--;
		}
		if(tt){
			cout<<"T";
			tt--;
		}
		if(ee){
			cout<<"e";
			ee--;
		}
		if(ss){
			cout<<"s";
			ss--;
		}
		if(t){
			cout<<"t";
			t--;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}