/*
1004. �ɼ����� (20)

����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��ÿ�������������1��������������ʽΪ

��1�У�������n
��2�У���1��ѧ�������� ѧ�� �ɼ�
��3�У���2��ѧ�������� ѧ�� �ɼ�
... ... ...
��n+1�У���n��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�

����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������
Mike CS991301
Joe Math990112
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int max = -99999999, min = 99999999, score;
	string maxname, minname, maxnum, minnum, name, num;
	for(int i=0; i<n; i++){
		cin>>name>>num>>score;
		if(max<score){
			max = score;
			maxname = name;
			maxnum = num;
		}
		if(min>score){
			min = score;
			minname = name;
			minnum = num;
		}
	}
	cout<<maxname<<" "<<maxnum<<endl<<minname<<" "<<minnum<<endl;
	system("pause");
	return 0;
}