/*
1023. 组个最小数 (20)

给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：给定两个0，两个1，三个5，一个8，我们得到的最小的数就是10015558。

现给定数字，请编写程序输出能够组成的最小的数。

输入格式：

每个输入包含1个测试用例。每个测试用例在一行中给出10个非负整数，顺序表示我们拥有数字0、数字1、……数字9的个数。整数间用一个空格分隔。10个数字的总个数不超过50，且至少拥有1个非0的数字。

输出格式：

在一行中输出能够组成的最小的数。

输入样例：
2 2 0 0 0 3 0 0 1 0
输出样例：
10015558
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int num[10];
	vector<int> n;
	for(int i=0; i<10; i++){
		cin>>num[i];
		for(int j=0; j<num[i]; j++){
			n.push_back(i);
		}
	}
	sort(n.begin(), n.end());
	int u;
	for(int i=0; i<n.size(); i++){
		if(n[i]!=0){
			u=i;
			break;
		}
	}
	if(n[0]==0){
		cout<<n[u];
		for(int i=0; i<n.size(); i++){
			if(i!=u)
			cout<<n[i];
		}
		cout<<endl;
	}else{
		for(int i=0; i<n.size(); i++){
				cout<<n[i];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}