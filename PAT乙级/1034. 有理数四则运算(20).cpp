/*1034. 有理数四则运算(20)

本题要求编写程序，计算2个有理数的和、差、积、商。

输入格式：

输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为0。

输出格式：

分别在4行中按照“有理数1 运算符 有理数2 = 结果”的格式顺序输出2个有理数的和、差、积、商。
注意输出的每个有理数必须是该有理数的最简形式“k a/b”，其中k是整数部分，a/b是最简分数部分；若为负数，则须加括号；若除法分母为0，则输出“Inf”。题目保证正确的输出中没有超过整型范围的整数。

输入样例1：
2/3 -4/2
输出样例1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
输入样例2：
5/3 0/6
输出样例2：
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