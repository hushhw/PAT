/*
1045. 快速排序(25)

著名的快速排序算法里有一个经典的划分过程：我们通常采用某种方法取一个元素作为主元，通过交换，把比主元小的元素放到它的左边，比主元大的元素放到它的右边。 
给定划分后的N个互不相同的正整数的排列，请问有多少个元素可能是划分前选取的主元？

例如给定N = 5, 排列是1、3、2、4、5。则：

1的左边没有元素，右边的元素都比它大，所以它可能是主元；
尽管3的左边元素都比它小，但是它右边的2它小，所以它不能是主元；
尽管2的右边元素都比它大，但其左边的3比它大，所以它不能是主元；
类似原因，4和5都可能是主元。
因此，有3个元素可能是主元。

输入格式：

输入在第1行中给出一个正整数N（<= 105）； 第2行是空格分隔的N个不同的正整数，每个数不超过109。

输出格式：

在第1行中输出有可能是主元的元素个数；在第2行中按递增顺序输出这些元素，其间以1个空格分隔，行末不得有多余空格。

输入样例：
5
1 3 2 4 5
输出样例：
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
		if(a[i]==max && a[i]==b[i])//比左边都大并且在升序中正确位置，就一定是符合的
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

/* 硬编超时版
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