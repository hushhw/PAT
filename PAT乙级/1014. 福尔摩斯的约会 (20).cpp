/*
1014. ����Ħ˹��Լ�� (20)

����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm����
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����

��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ�
��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����
�������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ�

�ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��

������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����

�����ʽ��

��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д����MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
���������
THU 14:04
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	char t[2];
	int pos, i = 0, j = 0;
	while(i < a.length() && i < b.length()) {
		if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
			t[0] = a[i];
			break;
		}
		i++;
	}
	i = i + 1;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
			t[1] = a[i];
			break;
		}
		i++;
	}
	while (j < c.length() && j < d.length()) {
		if (c[j] == d[j] && isalpha(c[j])) {
			pos = j;
			break;
		}
		j++;
	}
	string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
	int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
	cout << week[t[0]-'A'];
	printf("%02d:%02d\n", m, pos);
	//system("pause");
	return 0;
}