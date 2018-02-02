/*
1019. 数字黑洞 (20)

给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

现给定任意4位正整数，请编写程序演示到达黑洞的过程。

输入格式：

输入给出一个(0, 10000)区间内的正整数N。

输出格式：

如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例。注意每个数字按4位数格式输出。

输入样例1：
6767
输出样例1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例2：
2222
输出样例2：
2222 - 2222 = 0000
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}


int main(){
	int n;
	int a[4];
	while(scanf("%d",&n)!=EOF){
		do{
			for(int i=0; i<4; i++){
				a[i] = n%10;
				n = n/10;
			}
			sort(a, a+4,cmp);
			int b=0, c=0;
			b = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
			c = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
			n = b - c;
			printf("%04d - %04d = %04d\n",b,c,n);
		}while(n!=6174 && n);
	}
	return 0;
}

/*
大神代码
int main() {
	string s;
	cin >> s;
	s.insert(0, 4 - s.length(), '0');
	do {
		string a = s, b = s;
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end());
		int result = stoi(a) - stoi(b);
		s = to_string(result);
		s.insert(0, 4 - s.length(), '0');
		cout << a << " - " << b << " = " << s << endl;
	} while (s != "6174" && s != "0000");
	return 0;
}
*/