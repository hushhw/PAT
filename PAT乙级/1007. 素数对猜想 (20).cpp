/*
1007. �����Բ��� (20)

�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������

�ָ�������������N (< 105)������㲻����N���������������Եĸ�����

�����ʽ��ÿ�������������1����������������������N��

�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����

����������
20
���������
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
