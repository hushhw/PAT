/*
1042. �ַ�ͳ��(20)

���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��

�����ʽ��

������һ���и���һ�����Ȳ�����1000���ַ������ַ�����ASCII���������ɼ��ַ����ո���ɣ����ٰ���1��Ӣ����ĸ���Իس��������س��������ڣ���

�����ʽ��

��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ��

����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
���������
e 7
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	int len=str.length();
	//cout<<"len:"<<len<<endl;
	map<char, int> s;
	for(int i=0; i<len; i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			if(str[i]>='A'&&str[i]<='Z')
				str[i] = str[i]+'a'-'A';
			s[str[i]]++;
			//cout<<"s[str[i]]"<<s[str[i]]<<endl;
		} else{
			continue;
		}
	}
	map<char, int>::iterator d;
	int max = -1;
	char word='z'+'1';
	for(d=s.begin(); d!=s.end(); d++){
		if(d->second>max || (d->second==max && d->first < word)){
			max = d->second;
			word = d->first;
		}
	}
	cout<<word<<" "<<max<<endl;
	system("pause");
	return 0;
}