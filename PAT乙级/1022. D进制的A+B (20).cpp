/*
1022. D进制的A+B (20)

输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入格式：

输入在一行中依次给出3个整数A、B和D。

输出格式：

输出A+B的D进制数。

输入样例：
123 456 8
输出样例：
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