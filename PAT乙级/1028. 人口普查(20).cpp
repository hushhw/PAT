/*
1028. �˿��ղ�(20)

ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�

����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���������֪����û�г���200������ˣ���������2014��9��6�գ����Գ���200������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���

�����ʽ��

�����ڵ�һ�и���������N��ȡֵ��(0, 105]�����N�У�ÿ�и���1���˵��������ɲ�����5��Ӣ����ĸ��ɵ��ַ��������Լ�����yyyy/mm/dd��������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�

�����ʽ��

��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���

����������
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
���������
3 Tom John
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string name;
	int year, month, day, count = 0;
	int maxyear = 0, maxmonth = 0, maxday = 0, minyear = 9999, minmonth = 99, minday = 99;
	string maxname, minname;
	for (int i = 0; i < n; i++) {
		cin >> name;
		scanf("%d/%d/%d",&year, &month, &day);
		if((year < 2014 || (year == 2014 && month < 9) || (year == 2014 && month == 9 && day <= 6)) &&
			(year > 1814 || (year == 1814 && month > 9) || (year == 1814 && month == 9 && day >= 6))) {
				count++;
				if(year > maxyear || (year == maxyear && month > maxmonth) || (year == maxyear && month == maxmonth && day > maxday)) {
					maxyear = year;
					maxmonth = month;
					maxday = day;
					maxname = name;
				}
				if(year < minyear || (year == minyear && month < minmonth) || (year == minyear && month == minmonth && day < minday)) {
					minyear = year;
					minmonth = month;
					minday = day;
					minname = name;
				}
		}
	}
	cout << count;
	if (count != 0)
		cout << " " << minname << " " << maxname;
	return 0;
}