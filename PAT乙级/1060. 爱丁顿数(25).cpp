/*
1060. ��������(25)

Ӣ������ѧ�Ұ����ٺ�ϲ���ﳵ����˵��Ϊ����ҫ�Լ����ﳵ��������������һ��������������E����������E���ﳵ����EӢ����������E����˵�������Լ���E����87��

�ָ���ĳ��N����ﳵ���룬���������Ӧ�İ�������E��<=N����

�����ʽ��

�����һ�и���һ��������N��<=105�����������ﳵ���������ڶ��и���N���Ǹ�����������ÿ����ﳵ���롣

�����ʽ��

��һ���и���N��İ���������

����������
10
6 7 6 9 3 10 8 2 7 8
���������
6
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n; 
	vector<int> a(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());

	int e=0;
	for(int i=a.size()-1; i>=0; i--){
		if(a[i]>e+1){
			e++;
		} else
			break;
	}
	cout<<e<<endl;
	system("pause");
	return 0;
}