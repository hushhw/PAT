/*
1040. �м���PAT��25��

�ַ���APPAPT�а������������ʡ�PAT�������е�һ��PAT�ǵ�2λ(P),��4λ(A),��6λ(T)���ڶ���PAT�ǵ�3λ(P),��4λ(A),��6λ(T)��

�ָ����ַ�������һ�������γɶ��ٸ�PAT��

�����ʽ��

����ֻ��һ�У�����һ���ַ��������Ȳ�����105��ֻ����P��A��T������ĸ��

�����ʽ��

��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����

����������
APPAPT
���������
2
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//PAT��������ÿһλAǰ��P��������A���T���������
int main(){
	string pat;
	cin>>pat;
	int len = pat.length(), pp=0, aa=0, tt=0;
	for(int i=0; i<len; i++){   //�����ܹ��ж��ٸ�T
		if(pat[i]=='T')
			tt++;
	}

	for(int i=0; i<len; i++){
		if(pat[i]=='P') pp++;
		if(pat[i]=='T') tt--;
		if(pat[i]=='A') aa = (aa+(pp*tt)%1000000007)%1000000007;
	}
	cout<<aa<<endl;
	system("pause");
	return 0;
}