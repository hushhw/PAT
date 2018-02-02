/*
1018. 锤子剪刀布 (20)

大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：


现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：

输入第1行给出正整数N（<=105），即双方交锋的次数。随后N行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表甲方，第2个代表乙方，中间有1个空格。

输出格式：

输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。

输入样例：
10
C J //1
J B //1
C B //2
B B //-
B C //1
C C //-
C B //2
J B //1
B C //1
J J //-
输出样例：
5 3 2
2 3 5
B B
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int victory=0, tie=0;
		vector<char> a(n);
		vector<char> b(n);
		int victory_a[3];
		int victory_b[3];
		memset(victory_a, 0, sizeof(victory_a));
		memset(victory_b, 0, sizeof(victory_b));
		for(int i=0; i<n; i++){
			cin>>a[i]>>b[i];
			if(a[i]==b[i])
				tie++;
			else if((a[i]=='C' && b[i]=='J') || (a[i]=='B' && b[i]=='C') || (a[i]=='J' && b[i]=='B')){
				victory++;
				if(a[i]=='B')
					victory_a[0]++;
				else if(a[i]=='C')
					victory_a[1]++;
				else
					victory_a[2]++;
			}
			else
			{
				if(b[i]=='B')
					victory_b[0]++;
				else if(b[i]=='C')
					victory_b[1]++;
				else
					victory_b[2]++;
			}
		}
		cout<<victory<<" "<<tie<<" "<<n-victory-tie<<endl;
		cout<<n-victory-tie<<" "<<tie<<" "<<victory<<endl;

		int max_a = victory_a[0]>=victory_a[1] ? 0:1;
		max_a = victory_a[max_a]>=victory_a[2] ? max_a:2;
		int max_b = victory_b[0]>=victory_b[1] ? 0:1;
		max_b = victory_b[max_b]>=victory_b[2] ? max_b:2;
		char str[4]={"BCJ"};
		cout<<str[max_a]<<" "<<str[max_b]<<endl;
	}
	return 0;
}