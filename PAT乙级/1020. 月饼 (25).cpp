/*
1020. �±� (25)

�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ��������಻ͬ��ζ���±���
�ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�

ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ�
����������3���±����������ֱ�Ϊ18��15��10��֣����ۼ۷ֱ�Ϊ75��72��45��Ԫ��
����г������������ֻ��20��֣���ô��������������Ӧ��������ȫ��15��ֵ�2���±����Լ�5��ֵ�3���±������ 72 + 45/2 = 94.5����Ԫ����

�����ʽ��

ÿ���������1������������ÿ�����������ȸ���һ��������1000��������N��ʾ�±������������Լ�������500�������Ϊ��λ����������D��ʾ�г���������������һ�и���N��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и���N��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���

�����ʽ��

��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С�����2λ��

����������
3 20
18 15 10
75 72 45
���������
94.50
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct mooncake{
	float mount, price, unit;
};
int cmp(mooncake a, mooncake b) {
	return a.unit > b.unit;
}
int main() {
	int n, need;
	cin >> n >> need;
	vector<mooncake> a(n);
	for (int i = 0; i < n; i++) scanf("%f", &a[i].mount);
	for (int i = 0; i < n; i++) scanf("%f", &a[i].price);
	for (int i = 0; i < n; i++) a[i].unit = a[i].price / a[i].mount;
	sort(a.begin(), a.end(), cmp);
	float result = 0.0;
	for (int i = 0; i < n; i++) {
		if (a[i].mount <= need) {
			result = result + a[i].price;
		} else {
			result = result + a[i].unit * need;
			break;
		}
		need = need - a[i].mount;
	}
	printf("%.2f\n",result);
	system("pause");
	return 0;
}