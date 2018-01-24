/*
1002. 写出这个数 (20)

读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len = str.length();
	int num=0;
	for(int i=0; i<len; i++){
		num += str[i]-'0';
	}
	string str_end;
	str_end = to_string(num);
	string s[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	
	len = str_end.length();
	for(int i=0; i<len; i++){
		if(i!=0) cout<<" ";
		cout<<s[str_end[i]-'0'];
	}
	cout<<endl;
	system("pause");
	return 0;
}