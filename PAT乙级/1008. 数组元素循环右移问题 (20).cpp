/*
1008. ����Ԫ��ѭ���������� (20)

һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M��M>=0����λ�ã�����A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����

�����ʽ��ÿ���������һ��������������1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���

�����ʽ����һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�

����������
6 2
1 2 3 4 5 6
���������
5 6 1 2 3 4
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (m != n && m != 0) {
		if (m > n) m = m - n;
		reverse(begin(a), begin(a) + n);

		reverse(begin(a), begin(a) + m);

		reverse(begin(a) + m, begin(a) + n);

	}
	for (int i = 0; i < n; i++)
		cout << a[i] << (i-n+1 ? " ":"\n");

	system("pause");
	return 0;
}