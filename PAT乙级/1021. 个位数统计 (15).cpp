/*
1021. ��λ��ͳ�� (15)

����һ��kλ����N = dk-1*10k-1 + ... + d1*101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)�����д����ͳ��ÿ�ֲ�ͬ�ĸ�λ���ֳ��ֵĴ�����
���磺����N = 100311������2��0��3��1����1��3��

�����ʽ��

ÿ���������1��������������һ��������1000λ��������N��

�����ʽ��

��N��ÿһ�ֲ�ͬ�ĸ�λ���֣���D:M�ĸ�ʽ��һ���������λ����D������N�г��ֵĴ���M��Ҫ��D�����������

����������
100311
���������
0:2
1:3
3:1
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
// 	string str;
// 	str.resize(11);
// 	while(scanf("%s",&str[0])!=EOF){
	string str;
	while(cin>>str){
		int a[10] = {0};
		for (int i = 0; i < str.length(); i++)
			a[str[i] - '0']++;
		for (int i = 0; i < 10; i++) {
			if (a[i] != 0) 
				printf("%d:%d\n", i, a[i]);
		}
	}
	return 0;
}