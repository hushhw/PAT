/*
1029. �ɼ���(20)

�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡����ڸ���Ӧ�������һ�����֡��Լ�ʵ�ʱ���������֣������г��϶���������Щ����

�����ʽ��

������2���зֱ����Ӧ����������֡��Լ�ʵ�ʱ���������֡�ÿ�������ǲ�����80���ַ��Ĵ�������ĸA-Z��������Сд��������0-9���Լ��»��ߡ�_��������ո���ɡ���Ŀ��֤2���ַ������ǿա�

�����ʽ��

���շ���˳����һ������������ļ�������Ӣ����ĸֻ�����д��ÿ������ֻ���һ�Ρ���Ŀ��֤������1��������

����������
7_This_is_a_test
_hs_s_a_es
���������
7TI
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*���еĴ���
int main() {
	string s1, s2, ans;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
		if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos)
			ans += toupper(s1[i]);
	cout << ans;
	return 0;
}
*/


int main(){
	string a,b;
	while(cin>>a>>b){
		int len_a = a.length(), len_b = b.length();
		int i,j,v,u=0;
		int hash[150]={};
		for(i=0; i<len_a; i++){
			for(j=0; j<len_b; j++){
				if(a[i]>='a' && a[i]<='z')
					a[i] = a[i] + 'A' - 'a';
				if(b[j]>='a' && b[j]<='z')
					b[j] = b[j] + 'A' - 'a';
				if(a[i]==b[j])
					break;
			}
			if(j>=len_b && hash[a[i]]==0){
				cout<<a[i];
				hash[a[i]] = 1;
			}
		}
	}
	return 0;
}
