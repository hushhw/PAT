/*
1045. ��������(25)

�����Ŀ��������㷨����һ������Ļ��ֹ��̣�����ͨ������ĳ�ַ���ȡһ��Ԫ����Ϊ��Ԫ��ͨ���������ѱ���ԪС��Ԫ�طŵ�������ߣ�����Ԫ���Ԫ�طŵ������ұߡ� 
�������ֺ��N��������ͬ�������������У������ж��ٸ�Ԫ�ؿ����ǻ���ǰѡȡ����Ԫ��

�������N = 5, ������1��3��2��4��5����

1�����û��Ԫ�أ��ұߵ�Ԫ�ض���������������������Ԫ��
����3�����Ԫ�ض�����С���������ұߵ�2��С����������������Ԫ��
����2���ұ�Ԫ�ض������󣬵�����ߵ�3��������������������Ԫ��
����ԭ��4��5����������Ԫ��
��ˣ���3��Ԫ�ؿ�������Ԫ��

�����ʽ��

�����ڵ�1���и���һ��������N��<= 105���� ��2���ǿո�ָ���N����ͬ����������ÿ����������109��

�����ʽ��

�ڵ�1��������п�������Ԫ��Ԫ�ظ������ڵ�2���а�����˳�������ЩԪ�أ������1���ո�ָ�����ĩ�����ж���ո�

����������
5
1 3 2 4 5
���������
3
1 4 5
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	int *b = new int[n];
	int *num = new int[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	int max=0, count=0;
	for(int i=0; i<n; i++){
		if(a[i]>max)
			max = a[i];
		if(a[i]==max && a[i]==b[i])//����߶���������������ȷλ�ã���һ���Ƿ��ϵ�
			num[count++] = a[i];
	}
	cout<<count<<endl;

	for(int i=0; i<count; i++)
		cout<<num[i]<<((i<count-1)? " ":"");
	cout<<endl;
	delete[] a;
	delete[] b;
	delete[] num;
	system("pause");
	return 0;
}

/* Ӳ�೬ʱ��
int main(){
	int n;
	cin>>n;
	int a[100005], b[100005];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int count=0;
	for(int i=0; i<n; i++){
		bool left=true,right=true;
		for(int u=0; u<i; u++){
			if(a[u]>a[i]){
				left=false;
				break;
			}
		}
		for(int v=i+1; v<n; v++){
			if(a[v]<a[i]){
				right=false;
				break;
			}
		}
		if(left && right){
			b[count++]=a[i];
		}
	}
	cout<<count<<endl;
	sort(b, b+count);
	for(int i=0; i<count; i++)
		cout<<b[i]<<((i<count-1)? " ":"");
	cout<<endl;
	system("pause");
	return 0;
}
*/