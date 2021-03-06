/*
1012. 数字分类 (20)

给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(){
	int N;
	while(cin>>N){
		vector<int> a(N);
		for(int i=0; i<N; i++)
			cin>>a[i];
		int a1=0,a2=0,a3=0,a5=0;
		double a4=0.0;
		bool key = true,a2_key=false;
		int a4_num=0;

		for(int i=0; i<N; i++){
			if(a[i]%5==0 && a[i]%2==0){
				a1 += a[i];
			}

			if(a[i]%5==1){
				if(key){
					a2_key = true;
					a2 = a2 + a[i];
					key = false;
				}else {
					a2 = a2 - a[i];
					key = true;
				}
			}

			if(a[i]%5==2)
				a3++;

			if(a[i]%5==3){
				a4_num++;
				a4 += a[i];
			}
			
			if(a[i]%5==4){
				if(a[i] > a5)
					a5 = a[i];
			}
		}
		
		for(int i=0; i<5; i++){
			if(i==0){
				if(a1==0)	cout<<"N ";
				else cout<<a1<<" ";
			}
			if(i==1){
				if(a2==0 && a2_key)	cout<<"0 ";
				else if(a2==0 && !a2_key)	cout<<"N ";
				else cout<<a2<<" ";
			}
			if(i==2){
				if(a3==0)	cout<<"N ";
				else cout<<a3<<" ";
			}
			if(i==3){
				if(a4==0 || a4_num==0)	cout<<"N ";
				else {
					a4 = a4/a4_num*1.0;
					printf("%.1f ",a4);
				}
			}
			if(i==4){
				if(a5==0)	cout<<"N"<<endl;
				else cout<<a5<<endl;
			}
		}

	}
	return 0;
}

/*
int main() {
	int n, num, A1 = 0, A2 = 0, A5 = 0;
	double A4 = 0.0;
	cin >> n;
	vector<int> v[5];
	for (int i = 0; i < n; i++) {
		cin >> num;
		v[num%5].push_back(num);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
			if (i == 1 && j % 2 == 0) A2 += v[i][j];
			if (i == 1 && j % 2 == 1) A2 -= v[i][j];
			if (i == 3) A4 += v[i][j];
			if (i == 4 && v[i][j] > A5) A5 = v[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		if (i != 0) printf(" ");
		if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
			printf("N"); continue;
		}
		if (i == 0) printf("%d", A1);
		if (i == 1) printf("%d", A2);
		if (i == 2) printf("%d", v[2].size());
		if (i == 3) printf("%.1f", A4 / v[3].size());
		if (i == 4) printf("%d", A5);
	}
	return 0;
}
*/