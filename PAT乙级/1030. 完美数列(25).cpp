/*
1030. ��������(25)

����һ�����������У���������p������������е����ֵ��M����Сֵ��m�����M <= m * p���������������������С�

���ڸ�������p��һЩ���������������ѡ�񾡿��ܶ��������һ���������С�

�����ʽ��

�����һ�и�������������N��p������N��<= 105����������������ĸ�����p��<= 109���Ǹ����Ĳ������ڶ��и���N����������ÿ����������109��

�����ʽ��

��һ�������������ѡ����ٸ����������������һ���������С�

����������
10 8
2 3 20 4 5 1 6 7 8 9
���������
8
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	long long p;
	scanf("%d%lld",&N,&p);
	vector<int> a(N);
	for(int i=0; i<N; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	long long min=0;
	int count=0;
	for(int i=0; i<N; i++){
		min = a[i]*p;
		for(int j=i+count; j<N; j++){
			if(a[j]<=min){
				count++;
			}
			else{
				break;
			}
		}
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}