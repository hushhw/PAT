/*
1063. �����װ뾶(20)

����ѧ�У�����ġ��װ뾶����ָ������ֵ��ģ���ϵ���ȷ�硣
����֮�����ڸ�����n�������ռ������ֵ{a1+b1i, ..., an+bni}�����ǵ�ģΪʵ�����鲿��ƽ���͵Ŀ����������װ뾶���������ģ��

���ڸ���һЩ�����ռ������ֵ��������㲢�����Щ����ֵ���װ뾶��

�����ʽ��

�����һ�и���������N��<= 10000�������������ֵ�ĸ��������N�У�ÿ�и���1������ֵ��ʵ�����鲿������Կո�ָ���ע�⣺��Ŀ��֤ʵ�����鲿��Ϊ����ֵ������1000��������

�����ʽ��

��һ��������װ뾶���������뱣��С�����2λ��

����������
5
0 1
2 0
-1 0
3 3
0 -3
���������
4.24
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	int sum,max=-1;
	double count;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		sum = a*a + b*b;
		if(sum>max)
			max = sum;
	}
	count = (sqrt((double)max));

	printf("%.2lf",count);
	system("pause");
	return 0;
}