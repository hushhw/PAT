/*
1009. Product of Polynomials (25)

This time, you are supposed to find A*B where A and B are two polynomials.

Input Specification:

Each input file contains one test case. 
Each case occupies 2 lines, and each line contains the information of a polynomial: K N1 aN1 N2 aN2 ... NK aNK, 
where K is the number of nonzero terms in the polynomial, 
Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively. 
It is given that 1 <= K <= 10, 0 <= NK < ... < N2 < N1 <=1000.

Output Specification:

For each test case you should output the product of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate up to 1 decimal place.

Sample Input
2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output
3 3 3.6 2 6.0 1 1.6
*/

/*
题目大意：
	求多项式A*B
*/

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n1, n2, a, cnt = 0;
	scanf("%d", &n1);
	double b, arr[1001] = {0.0}, ans[2001] = {0.0};
	for(int i = 0; i < n1; i++) {
		scanf("%d %lf", &a, &b);
		arr[a] = b;
	}
	scanf("%d", &n2);
	for(int i = 0; i < n2; i++) {
		scanf("%d %lf", &a, &b);
		for(int j = 0; j < 1001; j++)
			ans[j + a] += arr[j] * b;
	}
	for(int i = 2000; i >= 0; i--)
		if(ans[i] != 0.0) cnt++;
	printf("%d", cnt);
	for(int i = 2000; i >= 0; i--)
		if(ans[i] != 0.0)
			printf(" %d %.1f", i, ans[i]);
	return 0;
}