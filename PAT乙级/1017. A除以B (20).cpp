/*
1017. A����B (20)

����Ҫ�����A/B������A�ǲ�����1000λ����������B��1λ������������Ҫ�������Q������R��ʹ��A = B * Q + R������

�����ʽ��

������1�������θ���A��B���м���1�ո�ָ���

�����ʽ��

��1�����������Q��R���м���1�ո�ָ���

����������
123456789050987654321 7
���������
17636684150141093474 3
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string s;
	int a, t=0, temp=0;
	cin>>s>>a;
	int len = s.length();
	t = (s[0]-'0')/a;
	if((t!=0 && len>1) || len == 1)
		cout<<t;
	temp = (s[0]-'0')%a;
	for(int i=1; i<len; i++){
		t = (temp*10+s[i]-'0')/a;
		cout<<t;
		temp = (temp*10 + s[i] - '0')%a;
	}
	cout<<" "<<temp;
	system("pause");
	return 0;
}