/*
1022. D���Ƶ�A+B (20)

���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

�����ʽ��

������һ�������θ���3������A��B��D��

�����ʽ��

���A+B��D��������

����������
123 456 8
���������
1103
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(){
	int A,B,D;
	
	while(scanf("%d%d%d",&A,&B,&D)!=EOF){
		vector<int> num;
		int E = A+B;
		int sum=0;
		if(E==0)
			num.push_back(0);
		while(E){
			sum = E%D;
			E = E/D;
			num.push_back(sum);
		}
		for(int i=num.size()-1; i>=0; i--){
			cout<<num[i];
		}
		cout<<endl;
	}
	return 0;
}