/*
1059. C���Ծ���(20)


C���Ծ������㽭��ѧ�����ѧԺ���ֵ�һ�����ֵľ�������Ȼ������ּ��Ϊ�˺��棬�佱����Ҳ���ƶ��úܻ�����

0. �ھ���Ӯ��һ�ݡ����ش󽱡�������ܾ޴��һ��ѧ���о����ļ���������
1. ����Ϊ������ѧ����Ӯ����õĽ�Ʒ ���� С������ż��
2. �����˽��õ��ɿ�����

�������������������Լ�һϵ�в����ߵ�ID����Ҫ������Щ������Ӧ�û�õĽ�Ʒ��

�����ʽ��

�����һ�и���һ��������N��<=10000�����ǲ��������������N�и�������������ÿ�а�����˳�����һλ�����ߵ�ID��4λ������ɣ���
����������һ��������K�Լ�K����Ҫ��ѯ��ID��

�����ʽ��

��ÿ��Ҫ��ѯ��ID����һ���������ID: ��Ʒ�������н�Ʒ�����ǡ�Mystery Award�������ش󽱣��������ǡ�Minion����С���ˣ��������ǡ�Chocolate�����ɿ�������
�������ID���������������ӡ��Are you kidding?����ˣ���أ����������ID�Ѿ�����ˣ�����Ʒ�Ѿ�����ˣ�����ӡ��ID: Checked�������ܶ�Զ�ռ����

����������
6
1111
6666
8888
1234
5555
0001
6
8888
0001
1111
2222
8888
2222
���������
8888: Minion
0001: Chocolate
1111: Mystery Award
2222: Are you kidding?
8888: Checked
2222: Are you kidding?
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool sushu(int n){
	for(int i=2; i*i<=n; i++)
		if(n%i==0)
			return false;
	return true;
}

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	int b[10001]={0};
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[a[i]] = i+1;
	}
	int k, id;
	cin>>k;
	for(int i=0; i<k; i++){
		cin>>id;
		printf("%04d: ",id);
		
		if(b[id]==0){
			cout<<"Are you kidding?"<<endl;
		}
		else {
			if(b[id]==-1)
				cout<<"Checked"<<endl;
			else if(b[id]==1)
				cout<<"Mystery Award"<<endl;
			else if(sushu(b[id]))
				cout<<"Minion"<<endl;
			else
				cout<<"Chocolate"<<endl;
			b[id]=-1;
		}
	}
	system("pause");
	return 0;
}