/*
1055. ������ (25)

�ļ�����ʱ���κ���Ҫ������Ը�����N����K�ŵĶ�������Ŷӹ������£�

ÿ������ΪN/K������ȡ���������������ȫ��վ�����һ�ţ�
���������˵ĸ��Ӷ�����ǰ���κ��˰���
ÿ���������վ�м䣨�м�λ��Ϊm/2+1������mΪ������������������ȡ������
ÿ�����������м���Ϊ�ᣬ����߷��������Һ��������վ���м��˵����ࣨ����5�����Ϊ190��188��186��175��170�������Ϊ175��188��190��186��170�������������������ߣ��������������м��˵��ұߣ���
�����������ͬ�������ֵ��ֵ����������С����ﱣ֤��������
�ָ���һ�������ˣ����д����������ǵĶ��Ρ�

�����ʽ��

ÿ���������1������������ÿ������������1�и�������������N��<=10000������������K��<=10������������
���N�У�ÿ�и���һ���˵����֣��������ո񡢳��Ȳ�����8��Ӣ����ĸ������ߣ�[30, 300]�����ڵ���������

�����ʽ��

������յĶ��Ρ���K������������Կո�ָ�����ĩ�����ж���ո�ע�⣺��������������ߣ����ŵ���������Ϸ���ǰ��������·���

����������
10 3
Tom 188
Mike 170
Eva 168
Tim 160
Joe 190
Ann 168
Bob 175
Nick 186
Amy 160
John 159
���������
Bob Tom Joe Nick
Ann Mike Eva
Tim Amy John
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
	string name;
	int height;
};

int cmp(struct node a, struct node b) {
	return a.height != b.height ? a.height > b.height : a.name < b.name;
}
int main() {
	int n, k, m;
	cin >> n >> k;
	vector<node> stu(n);
	for(int i = 0; i < n; i++) {
		cin >> stu[i].name;
		cin >> stu[i].height;
	}
	sort(stu.begin(), stu.end(), cmp);
	int t = 0, row = k;
	while(row) {
		if(row == k) {
			m = n - n / k * (k - 1);
		} else {
			m = n / k;
		}
		vector<string> stemp(m);
		stemp[m / 2] = stu[t].name;
		// ���һ��
		int j = m / 2 - 1;
		for(int i = t + 1; i < t + m; i = i + 2)
			stemp[j--] = stu[i].name;
		// �ұ�һ��
		j = m / 2 + 1;
		for(int i = t + 2; i < t + m; i = i + 2)
			stemp[j++] = stu[i].name;
		// �����ǰ��
		cout << stemp[0];
		for(int i = 1; i < m; i++)
			cout << " " << stemp[i];
		cout << endl;
		t = t + m;
		row--;
	}
	return 0;
}