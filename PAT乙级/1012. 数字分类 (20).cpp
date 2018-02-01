/*
1012. ���ַ��� (20)

����һϵ�����������밴Ҫ������ֽ��з��࣬���������5�����֣�

A1 = �ܱ�5����������������ż���ĺͣ�
A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
A3 = ��5������2�����ֵĸ�����
A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
A5 = ��5������4��������������֡�
�����ʽ��

ÿ���������1������������ÿ�����������ȸ���һ��������1000��������N��������N��������1000�Ĵ�����������������ּ��Կո�ָ���

�����ʽ��

�Ը�����N��������������ĿҪ�����A1~A5����һ����˳����������ּ��Կո�ָ�������ĩ�����ж���ո�

������ĳһ�����ֲ����ڣ�������Ӧλ�������N����

��������1��
13 1 2 3 4 5 6 7 8 9 10 20 16 18
�������1��
30 11 2 9.7 9
��������2��
8 1 2 4 5 6 7 9 16
�������2��
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