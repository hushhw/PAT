/*
1033. 旧键盘打字(20)

旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。
现在给出应该输入的一段文字、以及坏掉的那些键，打出的结果文字会是怎样？

输入格式：

输入在2行中分别给出坏掉的那些键、以及应该输入的文字。
其中对应英文字母的坏键以大写给出；每段文字是不超过105个字符的串。
可用的字符包括字母[a-z, A-Z]、数字0-9、以及下划线“_”（代表空格）、“,”、“.”、“-”、“+”（代表上档键）。题目保证第2行输入的文字串非空。

注意：如果上档键坏掉了，那么大写的英文字母无法被打出。

输出格式：

在一行中输出能够被打出的结果文字。如果没有一个字符能被打出，则输出空行。

输入样例：
7+IE.
7_This_is_a_test.
输出样例：
_hs_s_a_tst
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string str_a, str_b, str;
	getline(cin, str_a);
	getline(cin, str_b);
	int hash[150]={0};
	int len_a=str_a.length(), len_b=str_b.length();
	int i,j;
	bool up=false;
	for(i=0; i<len_a; i++){
		hash[str_a[i]]=1;
		if(str_a[i]=='+')
			up = true;
	}
	char bb;
	for(i=0; i<len_b; i++){
		if(str_b[i]>='a' && str_b[i]<='z'){
			bb = str_b[i] + 'A' -'a';
			if(hash[bb]==0)
				str += str_b[i];
		}
		else if(str_b[i]>='A' && str_b[i]<='Z'){
			if(hash[str_b[i]]==0 && !up)
				str += str_b[i];
		}
		else{
			if(hash[str_b[i]]==0)
				str += str_b[i];
		}
	}
	cout<<str<<endl;
	system("pause");
	return 0;
}