/*1050. 螺旋矩阵(25)

本题要求将给定的N个正整数按非递增的顺序，填入“螺旋矩阵”。
所谓“螺旋矩阵”，是指从左上角第1个格子开始，按顺时针螺旋方向填充。要求矩阵的规模为m行n列，满足条件：m*n等于N；m>=n；且m-n取所有可能值中的最小值。

输入格式：

输入在第1行中给出一个正整数N，第2行给出N个待填充的正整数。所有数字不超过104，相邻数字以空格分隔。

输出格式：

输出螺旋矩阵。每行n个数字，共m行。相邻数字以1个空格分隔，行末不得有多余空格。

输入样例：
12
37 76 20 98 76 42 53 95 60 81 58 93
输出样例：
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