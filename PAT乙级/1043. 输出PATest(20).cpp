/*
1043. 输出PATest(20)

给定一个长度不超过10000的、仅由英文字母构成的字符串。
请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，并忽略其它字符。
当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
PATestPATestPTetPTePePee
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string str,s;
	cin>>str;
	int pp=0, aa=0, tt=0, ee=0, ss=0, t=0;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='P') pp++;
		else if(str[i]=='A') aa++;
		else if(str[i]=='T') tt++;
		else if(str[i]=='e') ee++;
		else if(str[i]=='s') ss++;
		else if(str[i]=='t') t++;
	}
	while(pp+aa+tt+ee+ss+t){
		if(pp){
			cout<<"P";
			pp--;
		}
		if(aa){
			cout<<"A";
			aa--;
		}
		if(tt){
			cout<<"T";
			tt--;
		}
		if(ee){
			cout<<"e";
			ee--;
		}
		if(ss){
			cout<<"s";
			ss--;
		}
		if(t){
			cout<<"t";
			t--;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}