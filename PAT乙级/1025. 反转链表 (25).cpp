/*
1025. 反转链表 (25)

给定一个常数K以及一个单链表L，请编写程序将L中每K个结点反转。例如：给定L为1→2→3→4→5→6，K为3，则输出应该为3→2→1→6→5→4；如果K为4，则输出应该为4→3→2→1→5→6，即最后不到K个元素不反转。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出第1个结点的地址、结点总个数正整数N(<= 105)、以及正整数K(<=N)，即要求反转的子链结点的个数。结点的地址是5位非负整数，NULL地址用-1表示。

接下来有N行，每行格式为：

Address Data Next

其中Address是结点地址，Data是该结点保存的整数数据，Next是下一结点的地址。

输出格式：

对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：
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