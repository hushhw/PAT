/*
1058. ѡ����(20)

���Ķ�ѡ���ǱȽ��鷳�����飬���������д�����������ʦ���Ķ�ѡ�⣬����ָ���ĵ���������ࡣ

�����ʽ��

�����ڵ�һ�и�������������N��<=1000����M��<=100�����ֱ���ѧ�������Ͷ�ѡ��ĸ�����
���M�У�ÿ��˳�θ���һ���������ֵ��������5������������ѡ�������������2�Ҳ�����5��������������ȷѡ�������������ѡ�����������������������ȷѡ�
ע��ÿ���ѡ���СдӢ����ĸa��ʼ˳�����С��������1���ո�ָ���
���N�У�ÿ�и���һ��ѧ���Ĵ����������ÿ��𰸸�ʽΪ��(ѡ�е�ѡ����� ѡ��1 ����)��������Ŀ˳�������
ע�⣺��Ŀ��֤ѧ���Ĵ�������ǺϷ��ģ���������ѡ�е�ѡ��������ʵ��ѡ�����������

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�ע������ʱֻ��ѡ��ȫ����ȷ���ܵõ�����ķ�����
���һ��������������Ŀ�Ĵ�������ͱ�ţ���Ŀ���������˳���1��ʼ��ţ�������в��У��򰴱�ŵ���˳�������
���ּ��ÿո�ָ�������β�����ж���ո����������Ŀ��û���˴��������һ�������Too simple����

����������
3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (2 b d) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (2 b c) (4 a b c d)
���������
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

struct problem{   //�����Ŀ   
	int score;   //�ܷ�   
	int sum;    //ѡ������   
	int anw;    //��ȷѡ������   
	string right;    //��ȷѡ���   
};  
problem p[105];  
int main()  
{  
	int N, M;  
	cin >> N >> M;  //ѧ����������Ŀ��   

	for(int i = 0; i < M; i ++){   //������Ŀ��Ϣ   
		scanf("%d %d %d", &p[i].score, &p[i].sum, &p[i].anw);  
		char s;  
		for(int j = 0; j < p[i].anw; j ++){  
			cin >> s;  
			p[i].right += s;   //right�����ȷѡ���   
		}  
	}  
	//  for(int i = 0; i < 5; i ++) cout << p[0].a[i];  
	int *wrong = new int[M];    //���ÿ��������   
	for(int i = 0; i < N; i ++){   //����ѧ��   
		int sco = 0;  
		scanf("\n");  
		for(int j = 0; j < M; j ++){   //�������������Ϣ   
			if(j != 0) scanf(" ");  
			string str;  
			int k;  
			char s;  
			scanf("(%d", &k);   //ѡ�����   
			for(int q = 0; q < k; q ++){  
				scanf(" %c", &s);  
				str += s;   //str���ѧ�������Ĵ𰸼���   
			}  
			scanf(")");  
			if(str == p[j].right) sco += p[j].score;   //�жϼ���str����ȷ�𰸼����Ƿ���ͬ����ͬ��÷�   
			else wrong[j] ++;     //�����¼��ǰ��Ϊ����   
		}  
		printf("%d\n", sco);  
	}  

	int max = -1;  
	for(int i = 0; i < M; i ++){   //������ѯ���������   
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