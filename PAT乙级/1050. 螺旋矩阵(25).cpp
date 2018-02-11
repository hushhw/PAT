/*1050. ��������(25)

����Ҫ�󽫸�����N�����������ǵ�����˳�����롰�������󡱡�
��ν���������󡱣���ָ�����Ͻǵ�1�����ӿ�ʼ����˳ʱ������������䡣Ҫ�����Ĺ�ģΪm��n�У�����������m*n����N��m>=n����m-nȡ���п���ֵ�е���Сֵ��

�����ʽ��

�����ڵ�1���и���һ��������N����2�и���N�����������������������ֲ�����104�����������Կո�ָ���

�����ʽ��

�����������ÿ��n�����֣���m�С�����������1���ո�ָ�����ĩ�����ж���ո�

����������
12
37 76 20 98 76 42 53 95 60 81 58 93
���������
98 95 93
42 37 81
53 20 76
58 60 76
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int func(int N) {
	int i = sqrt((double)N);
	while(i >= 1) {
		if(N % i == 0)
			return i;
		i--;
	}
	return 1;
}

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	int i,j;
	for(i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end(), cmp);

	int x,y;
	x = func(n);
	y = n/x;
	//cout<<"n:"<<n<<" x:"<<x<<" y:"<<y<<endl;
	vector<vector<int>> num(y, vector<int>(x));
	int k=0,l=0;
	int level = y/2 + y%2;
	for(int k=0; k<level; k++){
		for(i=k; i<=x-k-1&&l<=n-1; i++)
			num[k][i]=a[l++];
		for(i=k+1; i<=y-k-1&&l<=n-1; i++)
			num[i][x-k-1]=a[l++];
		for(i=x-k-2; i>=k&&l<=n-1; i--)
			num[y-k-1][i]=a[l++];
		for(i=y-k-2; i>=k+1&&l<=n-1; i--)
			num[i][k]=a[l++];
	}

	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			cout<<num[i][j];
			if(j!=x-1)
				cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}