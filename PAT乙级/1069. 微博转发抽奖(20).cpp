/*
1069. ΢��ת���齱(20)

С��PAT�������֣�����֮���������΢��ת���齱�����ת���������а�˳��ÿ��N���˾ͷ���һ������������д���������ȷ���н�������

�����ʽ��

�����һ�и�������������M��<= 1000����N��S���ֱ���ת����������С���������н�������Լ���һλ�н��ߵ���ţ���Ŵ�1��ʼ����
���M�У�˳�����ת��΢�������ѵ��ǳƣ�������20���ַ����������ո�س��ķǿ��ַ�������

ע�⣺��������ת����Σ��������н���Ρ�����������ڵ�ǰ�н�λ�õ������Ѿ��й�������������˳��ȡ��һλ��

�����ʽ��

���������˳������н�������ÿ���ǳ�ռһ�С����û�����н����������Keep going...����

��������1��
9 3 2
Imgonnawin!
PickMe
PickMeMeMeee
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain
�������1��
PickMe
Imgonnawin!
TryAgainAgain
��������2��
2 3 5
Imgonnawin!
PickMe
�������2��
Keep going...
*/

#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
	int m,n,s;
	cin>>m>>n>>s;
	map<string, int> mapp;
	vector<string> name(m+1);
	for(int i=1; i<=m; i++){
		cin>>name[i];
	}
	bool flag = false;
	for(int i=s; i<=m; i+=n){
		if(mapp[name[i]]==0){
			cout<<name[i]<<endl;
			mapp[name[i]]=-1;
			flag=true;
		} else if(mapp[name[i]]==-1){
			i = i-n+1;
		}
	}
	if(!flag)
		cout<<"Keep going..."<<endl;
	system("pause");
	return 0;
}