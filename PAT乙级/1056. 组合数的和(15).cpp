/*
1056. ������ĺ�(15)

����N����0�ĸ�λ���֣�����������2�����ֶ�������ϳ�1��2λ�����֡�
Ҫ�����п�����ϳ�����2λ���ֵĺ͡��������2��5��8���������ϳ���25��28��52��58��82��85�����ǵĺ�Ϊ330��

�����ʽ��

������һ�����ȸ���N��1<N<10���������N����ͬ�ķ�0��λ���֡����ּ��Կո�ָ���

�����ʽ��

������п�����ϳ�����2λ���ֵĺ͡�

����������
3 2 8 5
���������
330
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int sum=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j) sum += a[i]*10 + a[j];
		}
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}
