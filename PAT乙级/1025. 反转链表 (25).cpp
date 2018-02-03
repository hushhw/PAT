/*
1025. ��ת���� (25)

����һ������K�Լ�һ��������L�����д����L��ÿK����㷴ת�����磺����LΪ1��2��3��4��5��6��KΪ3�������Ӧ��Ϊ3��2��1��6��5��4�����KΪ4�������Ӧ��Ϊ4��3��2��1��5��6������󲻵�K��Ԫ�ز���ת��

�����ʽ��

ÿ���������1������������ÿ������������1�и�����1�����ĵ�ַ������ܸ���������N(<= 105)���Լ�������K(<=N)����Ҫ��ת���������ĸ��������ĵ�ַ��5λ�Ǹ�������NULL��ַ��-1��ʾ��

��������N�У�ÿ�и�ʽΪ��

Address Data Next

����Address�ǽ���ַ��Data�Ǹý�㱣����������ݣ�Next����һ���ĵ�ַ��

�����ʽ��

��ÿ������������˳�������ת�����������ÿ�����ռһ�У���ʽ��������ͬ��

����������
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
���������
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

struct node{
	int nn, right;
};
node a[100010];
int l_left[100010];

int main(){
	int jiedian, n, k;
	while(cin>>jiedian>>n>>k){
		int m=0;
		int l;
		for(int i=0; i<n; i++){
			cin>>l;
			cin>>a[l].nn>>a[l].right;
		}
		int sum=0;
		while(jiedian!=-1){
			l_left[sum++] = jiedian;
			jiedian = a[jiedian].right;
		}

		for (int i = 0; i < (sum - sum % k); i += k)
			reverse(begin(l_left) + i, begin(l_left) + i + k);
		for(int i=0; i<sum-1; i++){
			printf("%05d %d %05d\n",l_left[i], a[l_left[i]].nn, l_left[i+1]);
		}
		printf("%05d %d -1\n",l_left[sum-1], a[l_left[sum-1]].nn);
	}
	return 0;
}