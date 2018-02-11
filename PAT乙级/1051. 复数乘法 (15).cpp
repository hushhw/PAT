/*
1051. �����˷� (15)

��������д��(A + Bi)�ĳ�����ʽ������A��ʵ����B���鲿��i��������λ������i2 = -1��
Ҳ����д�ɼ������µ�ָ����ʽ(R*e(Pi))������R�Ǹ���ģ��P�Ƿ��ǣ�i��������λ����ȼ���������ʽ R(cos(P) + isin(P))��

�ָ�������������R��P��Ҫ����������˻��ĳ�����ʽ��

�����ʽ��

������һ�������θ�������������R1, P1, R2, P2�����ּ��Կո�ָ���

�����ʽ��

��һ���а��ա�A+Bi���ĸ�ʽ��������˻��ĳ�����ʽ��ʵ�����鲿������2λС����ע�⣺���B�Ǹ�������Ӧ��д�ɡ�A-|B|i������ʽ��

����������
2.3 3.5 5.2 0.4
���������
-8.68-8.23i
*/

//A=(R1*R2)cos(P1+P2)��B=(R1*R2)sin(P1+P2)

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double r1, p1, r2, p2;
	cin>>r1>>p1>>r2>>p2;
	double a,b;
	a = (r1*r2)*cos(p1+p2);
	b = (r1*r2)*sin(p1+p2);
	if(abs(a)<0.01)
		a=0;
	if(abs(b)<0.01)
		b=0;
	if(b<0)
		printf("%.2lf-%.2lfi\n",a, abs(b));
	else
		printf("%.2lf+%.2lfi\n",a, b);
	system("pause");
	return 0;
}