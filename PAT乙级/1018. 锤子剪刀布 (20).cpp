/*
1018. ���Ӽ����� (20)

���Ӧ�ö����桰���Ӽ�����������Ϸ������ͬʱ�������ƣ�ʤ��������ͼ��ʾ��


�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô���Ƶ�ʤ�����

�����ʽ��

�����1�и���������N��<=105������˫������Ĵ��������N�У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�C�������ӡ���J������������B������������1����ĸ����׷�����2�������ҷ����м���1���ո�

�����ʽ��

�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ�����3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣

����������
10
C J //1
J B //1
C B //2
B B //-
B C //1
C C //-
C B //2
J B //1
B C //1
J J //-
���������
5 3 2
2 3 5
B B
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int victory=0, tie=0;
		vector<char> a(n);
		vector<char> b(n);
		int victory_a[3];
		int victory_b[3];
		memset(victory_a, 0, sizeof(victory_a));
		memset(victory_b, 0, sizeof(victory_b));
		for(int i=0; i<n; i++){
			cin>>a[i]>>b[i];
			if(a[i]==b[i])
				tie++;
			else if((a[i]=='C' && b[i]=='J') || (a[i]=='B' && b[i]=='C') || (a[i]=='J' && b[i]=='B')){
				victory++;
				if(a[i]=='B')
					victory_a[0]++;
				else if(a[i]=='C')
					victory_a[1]++;
				else
					victory_a[2]++;
			}
			else
			{
				if(b[i]=='B')
					victory_b[0]++;
				else if(b[i]=='C')
					victory_b[1]++;
				else
					victory_b[2]++;
			}
		}
		cout<<victory<<" "<<tie<<" "<<n-victory-tie<<endl;
		cout<<n-victory-tie<<" "<<tie<<" "<<victory<<endl;

		int max_a = victory_a[0]>=victory_a[1] ? 0:1;
		max_a = victory_a[max_a]>=victory_a[2] ? max_a:2;
		int max_b = victory_b[0]>=victory_b[1] ? 0:1;
		max_b = victory_b[max_b]>=victory_b[2] ? max_b:2;
		char str[4]={"BCJ"};
		cout<<str[max_a]<<" "<<str[max_b]<<endl;
	}
	return 0;
}