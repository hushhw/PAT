/*
1016. ����A+B (15)

������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��

�ָ���A��DA��B��DB�����д�������PA + PB��

�����ʽ��

������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��

�����ʽ��

��һ�������PA + PB��ֵ��

��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
typedef long long LL;
using namespace std;

int main(){
	LL A,B;
	int Da, Db;
	while(scanf("%lld %d %lld %d", &A, &Da, &B, &Db)!=EOF){
		int sum;
		LL DA=0,DB=0;
		while(A){
			sum = A%10;
			if(Da==sum)
				DA = DA*10 + Da;
			A = A/10;
			//cout<<"A:"<<A<<endl;
		}
		//cout<<"DA:"<<DA<<endl;
		while(B){
			sum = B%10;
			if(Db==sum)
				DB = DB*10 + Db;
			B = B/10;
		}
		//cout<<"DB:"<<DB<<endl;
		cout<<DA+DB<<endl;
	}
	return 0;
}
