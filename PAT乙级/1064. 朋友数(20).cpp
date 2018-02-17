/*
1064. 朋友数(20)

如果两个整数各位数字的和是一样的，则被称为是“朋友数”，而那个公共的和就是它们的“朋友证号”。
例如123和51就是朋友数，因为1+2+3 = 5+1 = 6，而6就是它们的朋友证号。
给定一些整数，要求你统计一下它们中有多少个不同的朋友证号。注意：我们默认一个整数自己是自己的朋友。

输入格式：

输入第一行给出正整数N。随后一行给出N个正整数，数字间以空格分隔。题目保证所有数字小于104。

输出格式：

首先第一行输出给定数字中不同的朋友证号的个数；随后一行按递增顺序输出这些朋友证号，数字间隔一个空格，且行末不得有多余空格。

输入样例：
8
123 899 51 998 27 33 36 12
输出样例：
4
3 6 9 26
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

//大佬告诉我用set。。。QAQ
//因为set是有序的、不重复的，所以set的size值就是输出的个数，set中的每一个数字即所有答案的数字序列
int main(){
	int n;
	cin>>n;
	set<int> a;
	int sum, num, count=0, ncount=0;
	for(int i=0; i<n; i++){
		cin>>sum;
		num = 0;
		while(sum){
			num += sum%10;
			sum = sum/10;
		}
		a.insert(num);
	}
	cout<<a.size()<<endl;
	//大佬告诉我，，不用记iterator，用auto自动匹配就好了QAQ
	set<int>::iterator s;
	for(s=a.begin(); s!=a.end(); s++){
		if(s!=a.begin())
			cout<<" ";
		cout<<*s;
	}
	cout<<endl;
	system("pause");
	return 0;
}


/*
int main(){
	int n;
	cin>>n;
	int a[10001];
	int sum, num, count=0, ncount=0;
	for(int i=0; i<n; i++){
		cin>>sum;
		num = 0;
		while(sum){
			num += sum%10;
			sum = sum/10;
		}
		a[count++] = num;
	}
	sort(a, a+count);
	for(int i=0; i<count; i++){
		if(a[i]!=a[i-1])
			ncount++;
	}
	cout<<ncount<<endl<<a[0];
	for(int i=1; i<count; i++){
		if(a[i]!=a[i-1])
			cout<<" "<<a[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}
*/