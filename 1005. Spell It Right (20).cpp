/*
1005. Spell It Right (20)

Given a non-negative integer N, 
your task is to compute the sum of all the digits of N, 
and output every digit of the sum in English.

Input Specification:

Each input file contains one test case. Each case occupies one line which contains an N (<= 10100).

Output Specification:

For each test case, output in one line the digits of the sum in English words. There must be one space between two consecutive words, but no extra space at the end of a line.

Sample Input:
12345
Sample Output:
one five
*/

/*
题目大意：
给一个非负正数N，计算N的每一位相加的和，然后输出和的每一位的英文读音
*/

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin>>a;
	int sum = 0;
	for(int i=0; i<a.length(); i++){
		sum += a[i]-'0';
	}
	string s = to_string(sum);
	string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	cout << arr[s[0] - '0'];
	for (int i = 1; i < s.length(); i++)
		cout << " " << arr[s[1] - '0'];
	cout<<endl;
	system("pause");
	return 0;
}