/*
1011. A+B��C (15)

��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������

4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/

#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;

int main(){
	int T;
	cin>>T;
	int n=T;
	while(T--){
		ll A,B,C;
		bool key;
		cin>>A>>B>>C;
		if(A+B>C){
			key = true;
		}else {
			key = false;
		}
		if(key)
			cout<<"Case #"<<n-T<<": true"<<endl;
		else
			cout<<"Case #"<<n-T<<": false"<<endl;

	}
	system("pause");
	return 0;
}