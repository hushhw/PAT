/*
1033. �ɼ��̴���(20)

�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡�
���ڸ���Ӧ�������һ�����֡��Լ���������Щ��������Ľ�����ֻ���������

�����ʽ��

������2���зֱ������������Щ�����Լ�Ӧ����������֡�
���ж�ӦӢ����ĸ�Ļ����Դ�д������ÿ�������ǲ�����105���ַ��Ĵ���
���õ��ַ�������ĸ[a-z, A-Z]������0-9���Լ��»��ߡ�_��������ո񣩡���,������.������-������+���������ϵ���������Ŀ��֤��2����������ִ��ǿա�

ע�⣺����ϵ��������ˣ���ô��д��Ӣ����ĸ�޷��������

�����ʽ��

��һ��������ܹ�������Ľ�����֡����û��һ���ַ��ܱ��������������С�

����������
7+IE.
7_This_is_a_test.
���������
_hs_s_a_tst
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string str_a, str_b, str;
	getline(cin, str_a);
	getline(cin, str_b);
	int hash[150]={0};
	int len_a=str_a.length(), len_b=str_b.length();
	int i,j;
	bool up=false;
	for(i=0; i<len_a; i++){
		hash[str_a[i]]=1;
		if(str_a[i]=='+')
			up = true;
	}
	char bb;
	for(i=0; i<len_b; i++){
		if(str_b[i]>='a' && str_b[i]<='z'){
			bb = str_b[i] + 'A' -'a';
			if(hash[bb]==0)
				str += str_b[i];
		}
		else if(str_b[i]>='A' && str_b[i]<='Z'){
			if(hash[str_b[i]]==0 && !up)
				str += str_b[i];
		}
		else{
			if(hash[str_b[i]]==0)
				str += str_b[i];
		}
	}
	cout<<str<<endl;
	system("pause");
	return 0;
}