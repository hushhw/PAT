/*
1052. ������ (20)

�����ձ������ͨ���ɡ��֡������ۡ������ڡ�������Ҫ������ɡ�����������Ǽ���һ����������ǰ����и�ʽ����ģ�

[����]([����][��][����])[����]
�ָ�����ѡ�õķ��ż��ϣ����㰴�û���Ҫ��������顣

�����ʽ��

����������ǰ����˳���Ӧ�����֡��ۡ��ڵĿ�ѡ���ż���ÿ����������һ�Է�����[]�ڡ�
��Ŀ��֤ÿ�����϶�������һ�����ţ���������10�����ţ�ÿ�����Ű���1��4���ǿ��ַ���

֮��һ�и���һ��������K��Ϊ�û�����ĸ��������K�У�ÿ�и���һ���û��ķ���ѡ��˳��Ϊ���֡����ۡ��ڡ����ۡ����֡�������ֻ������������Ӧ�����е���ţ���1��ʼ�������ּ��Կո�ָ���

�����ʽ��

��ÿ���û�������һ����������ɵı��顣���û�ѡ�����Ų����ڣ��������Are you kidding me? @\/@����

����������
[�r][�q][o][~\][/~]  [<][>]
[�s][�t][^][-][=][>][<][@][��]
[��][��][_][��][^]  ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
���������
�r(�s���t)�q
<(@��=)/~
o(^��^)o
Are you kidding me? @\/@
*/


#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<vector<string>> v;
	for(int i=0; i<3; i++){
		string s;
		getline(cin, s);
		vector<string> str;
		int k=0;
		for(int j=0; j<s.length(); j++){
			if(s[j]=='['){
				while(k++<s.length()){
					if(s[k]==']'){
						str.push_back(s.substr(j+1, k-j-1));
						break;
					}
				}
			}
		}
// 		for(int i=0; i<str.size(); i++){
// 			cout<<"str:"<<str[i]<<endl;
// 		}
		v.push_back(str);
	}
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int a, b, c, d, e;
		cin>>a>>b>>c>>d>>e;
		if(a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
			cout << "Are you kidding me? @\\/@" << endl;
			continue;
		}
		cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
	}
	system("pause");
	return 0;
}