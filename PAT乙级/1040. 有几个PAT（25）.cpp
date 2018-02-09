/*
1040. 有几个PAT（25）

字符串APPAPT中包含了两个单词“PAT”，其中第一个PAT是第2位(P),第4位(A),第6位(T)；第二个PAT是第3位(P),第4位(A),第6位(T)。

现给定字符串，问一共可以形成多少个PAT？

输入格式：

输入只有一行，包含一个字符串，长度不超过105，只包含P、A、T三种字母。

输出格式：

在一行中输出给定字符串中包含多少个PAT。由于结果可能比较大，只输出对1000000007取余数的结果。

输入样例：
APPAPT
输出样例：
2
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//PAT的总数是每一位A前的P的数量与A后的T的数量相乘
int main(){
	string pat;
	cin>>pat;
	int len = pat.length(), pp=0, aa=0, tt=0;
	for(int i=0; i<len; i++){   //记下总共有多少个T
		if(pat[i]=='T')
			tt++;
	}

	for(int i=0; i<len; i++){
		if(pat[i]=='P') pp++;
		if(pat[i]=='T') tt--;
		if(pat[i]=='A') aa = (aa+(pp*tt)%1000000007)%1000000007;
	}
	cout<<aa<<endl;
	system("pause");
	return 0;
}