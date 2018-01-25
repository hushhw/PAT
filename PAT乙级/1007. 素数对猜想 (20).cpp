/*
1007. 素数对猜想 (20)

让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
*/

/*
84ms
#include <iostream>
#include <string>
using namespace std;

int a[100001];
int m,sum;

void sushu(int n){
	bool key = true;
	for(int i=2; i<=n; i++)
	{
		for(int j=2; j*j<=i; j++){
			if(i%j==0)
				key = false;
		}
		if(key){
			a[m] = i;
			m++;
		}
		key = true;
	}
}

int main(){
	int N;
	cin>>N;
	m=0;
	sum=0;
	sushu(N);
	for(int i=1; i<m; i++){
		if(a[i]-a[i-1]==2)
			sum++;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}
*/
//13ms
#include <iostream>
#include <string>
using namespace std;

int isprime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main(){
	int N,i,count=0;
	scanf("%d",&N);
	for(i=3;i<=N-2;i++){
		if(isprime(i)&&isprime(i+2))
			++count;
	}
	printf("%d",count);
	system("pause");
	return 0;
}
