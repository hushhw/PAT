/*
1064. ������(20)

�������������λ���ֵĺ���һ���ģ��򱻳�Ϊ�ǡ��������������Ǹ������ĺ;������ǵġ�����֤�š���
����123��51��������������Ϊ1+2+3 = 5+1 = 6����6�������ǵ�����֤�š�
����һЩ������Ҫ����ͳ��һ���������ж��ٸ���ͬ������֤�š�ע�⣺����Ĭ��һ�������Լ����Լ������ѡ�

�����ʽ��

�����һ�и���������N�����һ�и���N�������������ּ��Կո�ָ�����Ŀ��֤��������С��104��

�����ʽ��

���ȵ�һ��������������в�ͬ������֤�ŵĸ��������һ�а�����˳�������Щ����֤�ţ����ּ��һ���ո�����ĩ�����ж���ո�

����������
8
123 899 51 998 27 33 36 12
���������
4
3 6 9 26
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

//���и�������set������QAQ
//��Ϊset������ġ����ظ��ģ�����set��sizeֵ��������ĸ�����set�е�ÿһ�����ּ����д𰸵���������
int main(){
	int n;
	cin>>n;
	set<int> a;
	int sum, num, count=0, ncount=0;
	for(int i=0; i<n; i++){
		cin>>sum;
		num = 0;
		while(sum){
			num += sum%10;
			sum = sum/10;
		}
		a.insert(num);
	}
	cout<<a.size()<<endl;
	//���и����ң������ü�iterator����auto�Զ�ƥ��ͺ���QAQ
	set<int>::iterator s;
	for(s=a.begin(); s!=a.end(); s++){
		if(s!=a.begin())
			cout<<" ";
		cout<<*s;
	}
	cout<<endl;
	system("pause");
	return 0;
}


/*
int main(){
	int n;
	cin>>n;
	int a[10001];
	int sum, num, count=0, ncount=0;
	for(int i=0; i<n; i++){
		cin>>sum;
		num = 0;
		while(sum){
			num += sum%10;
			sum = sum/10;
		}
		a[count++] = num;
	}
	sort(a, a+count);
	for(int i=0; i<count; i++){
		if(a[i]!=a[i-1])
			ncount++;
	}
	cout<<ncount<<endl<<a[0];
	for(int i=1; i<count; i++){
		if(a[i]!=a[i-1])
			cout<<" "<<a[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}
*/