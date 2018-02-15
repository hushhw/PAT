/*
1058. 选择题(20)

批改多选题是比较麻烦的事情，本题就请你写个程序帮助老师批改多选题，并且指出哪道题错的人最多。

输入格式：

输入在第一行给出两个正整数N（<=1000）和M（<=100），分别是学生人数和多选题的个数。
随后M行，每行顺次给出一道题的满分值（不超过5的正整数）、选项个数（不少于2且不超过5的正整数）、正确选项个数（不超过选项个数的正整数）、所有正确选项。
注意每题的选项从小写英文字母a开始顺次排列。各项间以1个空格分隔。
最后N行，每行给出一个学生的答题情况，其每题答案格式为“(选中的选项个数 选项1 ……)”，按题目顺序给出。
注意：题目保证学生的答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。

输出格式：

按照输入的顺序给出每个学生的得分，每个分数占一行。注意判题时只有选择全部正确才能得到该题的分数。
最后一行输出错得最多的题目的错误次数和编号（题目按照输入的顺序从1开始编号）。如果有并列，则按编号递增顺序输出。
数字间用空格分隔，行首尾不得有多余空格。如果所有题目都没有人错，则在最后一行输出“Too simple”。

输入样例：
3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (2 b d) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (2 b c) (4 a b c d)
输出样例：
3
6
5
2 2 3 4
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

struct problem{   //存放题目   
	int score;   //总分   
	int sum;    //选项总数   
	int anw;    //正确选项总数   
	string right;    //正确选项集合   
};  
problem p[105];  
int main()  
{  
	int N, M;  
	cin >> N >> M;  //学生人数，题目数   

	for(int i = 0; i < M; i ++){   //输入题目信息   
		scanf("%d %d %d", &p[i].score, &p[i].sum, &p[i].anw);  
		char s;  
		for(int j = 0; j < p[i].anw; j ++){  
			cin >> s;  
			p[i].right += s;   //right存放正确选项集合   
		}  
	}  
	//  for(int i = 0; i < 5; i ++) cout << p[0].a[i];  
	int *wrong = new int[M];    //存放每题错误次数   
	for(int i = 0; i < N; i ++){   //遍历学生   
		int sco = 0;  
		scanf("\n");  
		for(int j = 0; j < M; j ++){   //逐题输入答题信息   
			if(j != 0) scanf(" ");  
			string str;  
			int k;  
			char s;  
			scanf("(%d", &k);   //选项个数   
			for(int q = 0; q < k; q ++){  
				scanf(" %c", &s);  
				str += s;   //str存放学生给出的答案集合   
			}  
			scanf(")");  
			if(str == p[j].right) sco += p[j].score;   //判断集合str与正确答案集合是否相同，相同则得分   
			else wrong[j] ++;     //否则记录当前题为错误   
		}  
		printf("%d\n", sco);  
	}  

	int max = -1;  
	for(int i = 0; i < M; i ++){   //遍历查询最多错误次数   
		if(max < wrong[i]) max = wrong[i];  
	}  
	if(max == 0) cout << "Too simple";  
	else{  
		cout << max;  
		for(int i = 0; i < M; i ++){  
			if(max == wrong[i]) cout << " " << i+1;  
		}  
	}  
	delete []wrong;
	system("pause");
	return 0;  
}