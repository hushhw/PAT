/*
1061. �ж���(15)

�ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�

�����ʽ��

�����ڵ�һ�и�������������100��������N��M���ֱ���ѧ���������ж���������
�ڶ��и���M��������5������������ÿ���������ֵ��
�����и���ÿ�����Ӧ����ȷ�𰸣�0�����ǡ���1�����ǡ���
���N�У�ÿ�и���һ��ѧ���Ľ�����ּ���Կո�ָ���

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�

����������
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
���������
13
11
12
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> score(m);
	vector<int> a(m);
	for(int i=0; i<m; i++)
		cin>>score[i];
	for(int i=0; i<m; i++)
		cin>>a[i];
	int b, sum=0;
	for(int i=0; i<n; i++){
		sum=0;
		for(int j=0; j<m; j++){
			cin>>b;
			if(b==a[j])
				sum+=score[j];
		}
		cout<<sum<<endl;
	}
	system("pause");
	return 0;
}