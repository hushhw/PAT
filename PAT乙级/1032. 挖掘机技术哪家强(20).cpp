/*
1032. �ھ�������ļ�ǿ(20)

Ϊ������ʵ˵���ھ�����������ļ�ǿ��PAT��֯��һ���ھ�����ܴ�������������ݱ������ͳ�Ƴ�������ǿ���Ǹ�ѧУ��

�����ʽ��

�����ڵ�1�и���������105��������N��������������
���N�У�ÿ�и���һλ�����ߵ���Ϣ�ͳɼ����������������ѧУ�ı�ţ���1��ʼ������ţ�����������ɼ����ٷ��ƣ����м��Կո�ָ���

�����ʽ��

��һ���и����ܵ÷���ߵ�ѧУ�ı�š������ܷ֣��м��Կո�ָ�����Ŀ��֤��Ψһ��û�в��С�

����������
6
3 65
2 80
1 100
2 70
3 40
3 0
���������
2 150
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b;
	map<int, int> m;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		m[a] += b;
	}
	int max=0, loc=0;
	map<int, int>::iterator diedai;
	for(diedai=m.begin(); diedai!=m.end(); diedai++){
		if(diedai->second > max){
			max = diedai->second;
			loc = diedai->first;
		}
	}
	cout<<loc<<" "<<max<<endl;
	system("pause");
	return 0;
}
