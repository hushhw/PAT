/*
1002. д������� (20)

����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len = str.length();
	int num=0;
	for(int i=0; i<len; i++){
		num += str[i]-'0';
	}
	string str_end;
	str_end = to_string(num);
	string s[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	
	len = str_end.length();
	for(int i=0; i<len; i++){
		if(i!=0) cout<<" ";
		cout<<s[str_end[i]-'0'];
	}
	cout<<endl;
	system("pause");
	return 0;
}