/*1034. ��������������(20)

����Ҫ���д���򣬼���2���������ĺ͡�������̡�

�����ʽ��

������һ���а��ա�a1/b1 a2/b2���ĸ�ʽ��������������ʽ�������������з��Ӻͷ�ĸȫ�����ͷ�Χ�ڵ�����������ֻ���ܳ����ڷ���ǰ����ĸ��Ϊ0��

�����ʽ��

�ֱ���4���а��ա�������1 ����� ������2 = ������ĸ�ʽ˳�����2���������ĺ͡�������̡�
ע�������ÿ�������������Ǹ��������������ʽ��k a/b��������k���������֣�a/b�����������֣���Ϊ��������������ţ���������ĸΪ0���������Inf������Ŀ��֤��ȷ�������û�г������ͷ�Χ��������

��������1��
2/3 -4/2
�������1��
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
��������2��
5/3 0/6
�������2��
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

void oput(ll a1, ll b1){
	ll a = a1/b1;
	a1 = a1%b1;
	if(a==0 && a1==0)
		cout<<"0";
	else if(a<0 || a1<0){
		cout<<"(-";
		if(a)
			cout<<abs(a);
		if(a&&a1)
			cout<<" ";
		if(a1){
			ll g=gcd(abs(a1),b1);
			cout<<abs(a1)/g<<"/"<<b1/g;
		}
		cout<<")";
	}
	else{
		if(a)
			cout<<a;
		if(a&&a1)
			cout<<" ";
		if(a1){
			ll g=gcd(a1,b1);
			cout<<a1/g<<"/"<<b1/g;
		}
	}
}

void jisuan(char ysf,ll a1, ll b1, ll a2, ll b2){
	if(ysf=='-'){
		ll g = gcd(b1,b2);
		ll a = a1*(b2/g) - a2*(b1/g);
		oput(a, (b1*b2)/g);
	}else if(ysf=='+'){
		ll g = gcd(b1,b2);
		ll a = a1*(b2/g) + a2*(b1/g);
		oput(a, (b1*b2)/g);
	}else if(ysf=='*'){
		if(a1==0 || a2==0)
			cout<<"0";
		else{
			oput(a1*a2, b1*b2);
		}
	}else if(ysf=='/'){
		if(a2==0)
			cout<<"Inf";
		else{
			a1 = a1*b2;
			b1 = a2*b1;
			if(b1<0){
				b1 = abs(b1);
				a1 = -a1;
			}
			oput(a1, b1);
		}
	}
}

int main(){
	ll a1,b1,a2,b2,a,b;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	char ysf[4]={'+','-','*','/'};
	for(int i=0; i<4; i++){
		oput(a1, b1);
		cout<<" "<<ysf[i]<<" ";
		oput(a2, b2);
		cout<<" = ";
		jisuan(ysf[i], a1,b1, a2,b2);
		cout<<endl;
	}
	system("pause");
	return 0;
}