/*
1023. �����С�� (20)

��������0-9�����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�Ŀ����ʹ�����õ�����������С��ע��0��������λ�������磺��������0������1������5��һ��8�����ǵõ�����С��������10015558��

�ָ������֣����д��������ܹ���ɵ���С������

�����ʽ��

ÿ���������1������������ÿ������������һ���и���10���Ǹ�������˳���ʾ����ӵ������0������1����������9�ĸ�������������һ���ո�ָ���10�����ֵ��ܸ���������50��������ӵ��1����0�����֡�

�����ʽ��

��һ��������ܹ���ɵ���С������

����������
2 2 0 0 0 3 0 0 1 0
���������
10015558
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int num[10];
	vector<int> n;
	for(int i=0; i<10; i++){
		cin>>num[i];
		for(int j=0; j<num[i]; j++){
			n.push_back(i);
		}
	}
	sort(n.begin(), n.end());
	int u;
	for(int i=0; i<n.size(); i++){
		if(n[i]!=0){
			u=i;
			break;
		}
	}
	if(n[0]==0){
		cout<<n[u];
		for(int i=0; i<n.size(); i++){
			if(i!=u)
			cout<<n[i];
		}
		cout<<endl;
	}else{
		for(int i=0; i<n.size(); i++){
				cout<<n[i];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}