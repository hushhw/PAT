/*
1009. ˵���� (20)

����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�

����������
Hello World Here I Come
���������
Come I Here World Hello
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	stack<string> v;
	string s;
	while(cin >> s) {
		v.push(s);
	}
	cout << v.top();
	v.pop();
	while(!v.empty()) {
		cout << " " << v.top();
		v.pop();
	}
	return 0;
}