/*
1044. 火星数字(20)

火星人是以13进制计数的：

地球人的0被火星人称为tret。
地球人数字1到12的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
火星人将进位以后的12个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
例如地球人的数字“29”翻译成火星文就是“hel mar”；而火星文“elo nov”对应地球数字“115”。为了方便交流，请你编写程序实现地球和火星数字之间的互译。

输入格式：
输入第一行给出一个正整数N（<100），随后N行，每行给出一个[0, 169)区间内的数字 —— 或者是地球文，或者是火星文。

输出格式：
对应输入的每一行，在一行中输出翻译后的另一种语言的数字。

输入样例：
4
29
5
elo nov
tam
输出样例：
hel mar
may
115
13
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string gg[13] = {"###", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string ss[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main(){
	int n;
	cin>>n;
	getchar();
	while(n--){
		string str;
		getline(cin, str);
		if(str[0]=='0'&&str.length()==1)
			cout<<"tret"<<endl;
		else if(str[0]>='0'&&str[0]<='9'){
			int num = stoi(str);
			int i=0, g=0,s=0;
			g = num%13;
			num = num/13;
			if(num!=0){
				s = num%13;
				if(g!=0)
					cout<<ss[s]<<" "<<gg[g]<<endl;
				else
					cout<<ss[s]<<endl;
			} else{
				cout<<gg[g]<<endl;
			}
		} else{
			if(str.length()==4){
				cout<<"0"<<endl;
			}else if(str.length()==3){
				for(int i=1; i<=12; i++){
					if(str[0]==gg[i][0] && str[1]==gg[i][1]&&str[2]==gg[i][2])
						cout<<i<<endl;
					else if(str[0]==ss[i][0] && str[1]==ss[i][1]&&str[2]==ss[i][2])
						cout<<13*i<<endl;
				}
			}else{
				int t1=0, t2=0;
				for(int i=1; i<=12; i++){
					if(str[0]==ss[i][0] && str[1]==ss[i][1] && str[2]==ss[i][2])
						t1 = i;
					if(str[4]==gg[i][0] && str[5]==gg[i][1] && str[6]==gg[i][2])
						t2 = i;
				}
				cout<<t1*13+t2<<endl;
			}
		}
	}
	system("pause");
	return 0;
}