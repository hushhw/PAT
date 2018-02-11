/*
1057. 数零壹(20)

给定一串长度不超过105的字符串，本题要求你将其中所有英文字母的序号（字母a-z对应序号1-26，不分大小写）相加，得到整数N，然后再分析一下N的二进制表示中有多少0、多少1。
例如给定字符串“PAT (Basic)”，其字母序号之和为：16+1+20+2+1+19+9+3=71，而71的二进制是1000111，即有3个0、4个1。

输入格式：

输入在一行中给出长度不超过105、以回车结束的字符串。

输出格式：

在一行中先后输出0的个数和1的个数，其间以空格分隔。

输入样例：
PAT (Basic)
输出样例：
3 4
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int sum=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] = s[i] +'a'-'A';
		}
		if(s[i]>='a'&&s[i]<='z'){
			//cout<<"s:"<<s[i]<<endl;
			sum += (s[i]-'a'+1);
			//cout<<"s:"<<sum<<endl;
		}
	}
	//cout<<sum<<endl;
	int num=0, num0=0, num1=0;
	while(sum){
		num = sum%2;
		sum = sum/2;
		if(num)
			num1++;
		else
			num0++;
	}
	cout<<num0<<" "<<num1<<endl;
	system("pause");
	return 0;
}