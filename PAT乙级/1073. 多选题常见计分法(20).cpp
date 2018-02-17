/*
1073. ��ѡ�ⳣ���Ʒַ�(20)

���Ķ�ѡ���ǱȽ��鷳�����飬�кܶ಻ͬ�ļƷַ�����
��һ������ļƷַ����ǣ��������ѡ���˲�����ȷѡ�����û��ѡ���κδ���ѡ���õ�50%������
�������ѡ�����κ�һ�������ѡ����ܵ÷֡�
���������д�����������ʦ���Ķ�ѡ�⣬����ָ���ĵ�����ĸ�ѡ��������ࡣ

�����ʽ��

�����ڵ�һ�и�������������N��<=1000����M��<=100�����ֱ���ѧ�������Ͷ�ѡ��ĸ�����
���M�У�ÿ��˳�θ���һ���������ֵ��������5������������ѡ�������������2�Ҳ�����5��������������ȷѡ�������������ѡ�����������������������ȷѡ�ע��ÿ���ѡ���СдӢ����ĸa��ʼ˳�����С��������1���ո�ָ���
���N�У�ÿ�и���һ��ѧ���Ĵ����������ÿ��𰸸�ʽΪ��(ѡ�е�ѡ����� ѡ��1 ����)��������Ŀ˳�������ע�⣺��Ŀ��֤ѧ���Ĵ�������ǺϷ��ģ���������ѡ�е�ѡ��������ʵ��ѡ�����������

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�У����С�����1λ��
���������������Ŀѡ�����Ϣ����ʽΪ����������� ��Ŀ��ţ���Ŀ���������˳���1��ʼ��ţ�-ѡ��š���
����в��У���ÿ��һ��ѡ�����Ŀ��ŵ���˳��������ٲ�����ѡ��ŵ���˳�����������β�����ж���ո�
���������Ŀ��û���˴��������һ�������Too simple����

��������1��
3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (3 b d e) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (1 c) (4 a b c d)
�������1��
3.5
6.0
2.5
2 2-e
2 3-a
2 3-b
��������2��
2 2 
3 4 2 a c
2 5 1 b
(2 a c) (1 b)
(2 a c) (1 b)
�������2��
5.0
5.0
Too simple
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n = 0, m = 0, opt_num = 0, true_opt_num = 0, temp = 0, max_error_cnt = 0;
	int hash[] = {1, 2, 4, 8, 16}, opt[1010][110] = {0};
	char c;
	scanf("%d %d", &n, &m);
	vector<int> full_score(m), true_opt(m);
	vector<vector<int> > fre(m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &full_score[i], &opt_num, &true_opt_num);
		for (int j = 0; j < true_opt_num; j++) {
			scanf(" %c", &c);
			true_opt[i] += hash[c-'a'];
		}
		fre[i].resize(5);
	}
	for (int i = 0; i < n; i++) {
		double grade = 0;
		for (int j = 0; j < m; j++) {
			getchar();
			getchar(); // '('
			scanf("%d", &temp);
			for (int k = 0; k < temp; k++) {
				scanf(" %c", &c);
				opt[i][j] += hash[c-'a'];
			}
			getchar(); // ')'
			int el = opt[i][j] ^ true_opt[j];
			if (el) {
				if ((opt[i][j] | true_opt[j]) == true_opt[j]) {
					grade += full_score[j] * 1.0 / 2;
				}
				if (el) {
					if (el & hash[0]) fre[j][0]++; // a
					if (el & hash[1]) fre[j][1]++; // b
					if (el & hash[2]) fre[j][2]++; // c
					if (el & hash[3]) fre[j][3]++; // d
					if (el & hash[4]) fre[j][4]++; // e
				}
			} else
				grade += full_score[j];
		}
		printf("%.1f\n", grade);
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < 5; j++)
			max_error_cnt = max_error_cnt > fre[i][j] ? max_error_cnt : fre[i][j];

	if (max_error_cnt == 0) {
		printf("Too simple\n");
	} else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < fre[i].size(); j++) {
				if (max_error_cnt == fre[i][j]) {
					printf("%d %d-%c\n", max_error_cnt, i+1, 'a'+j);
				}
			}
		}
	}
	system("pause");
	return 0;
}