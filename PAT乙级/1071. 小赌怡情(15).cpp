/*
1071. С������(15)

���Ե���С�����顱������һ���ܼ򵥵�С��Ϸ�������ɼ����������һ��������Ȼ�������ע�ĵڶ�����������ȵ�һ��������С��
�����עt������󣬼���������ڶ�����������Ҳ¶��ˣ���ϵͳ�������t�����룻����۳����t�����롣

ע�⣺�����ע�ĳ��������ܳ����Լ��ʻ���ӵ�еĳ�����������������ȫ���������Ϸ�ͽ�����

�����ʽ��

�����ڵ�һ�и���2��������T��K��<=100�����ֱ���ϵͳ�ڳ�ʼ״̬�����͸���ҵĳ��������Լ���Ҫ�������Ϸ���������K�У�ÿ�ж�Ӧһ����Ϸ��˳�����4�����֣�

n1 b t n2

����n1��n2�Ǽ�����Ⱥ����������[0, 9]�ڵ���������֤�������ֲ���ȡ�bΪ0��ʾ��Ҷġ�С����Ϊ1��ʾ��Ҷġ��󡱡�t��ʾ�����ע�ĳ���������֤�����ͷ�Χ�ڡ�

�����ʽ��

��ÿһ����Ϸ���������������Ӧ���������t�������ע����x����ҵ�ǰ���еĳ���������

���Ӯ�����
Win t!  Total = x.
����䣬���
Lose t.  Total = x.
�����ע�������еĳ����������
Not enough tokens.  Total = x.
����������
Game Over.
����������
��������1��
100 4
8 0 100 2
3 1 50 1
5 1 200 6
7 0 200 8
�������1��
Win 100!  Total = 200.
Lose 50.  Total = 150.
Not enough tokens.  Total = 150.
Not enough tokens.  Total = 150.
��������2��
100 4
8 0 100 2
3 1 200 1
5 1 200 6
7 0 200 8
�������2��
Win 100!  Total = 200.
Lose 200.  Total = 0.
Game Over.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int T = 0, K = 0, n1 = 0, n2 = 0, b = 0, t = 0;
	scanf("%d %d", &T, &K);
	for (int i = 0; i < K; i++) {
		scanf("%d %d %d %d", &n1, &b, &t, &n2);
		if (T == 0) {
			printf("Game Over.\n");
			return 0;
		} else if (t > T) {
			printf("Not enough tokens.  Total = %d.\n", T);
		} else if (n2 > n1) {
			if (b == 1) {
				T += t;
				printf("Win %d!  Total = %d.\n", t, T);
			} else {
				T -= t;
				printf("Lose %d.  Total = %d.\n", t, T);
			}
		} else if (n2 < n1) {
			if (b == 1) {
				T -= t;
				printf("Lose %d.  Total = %d.\n", t, T);
			} else {
				T += t;
				printf("Win %d!  Total = %d.\n", t, T);
			}
		}
	}
	system("pause");
	return 0;
}