/*
1037. �ڻ����ִ�����Ǯ��20��

������ǹ����������ԣ����֪��ħ�����������Լ��Ļ���ϵͳ ���� ���纣����߹����ģ���ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ�����ɣ������ס���
���ڣ���������Ӧ���ļ�ǮP����ʵ����ǮA�����������дһ��������������Ӧ�ñ��ҵ���Ǯ��

�����ʽ��

������1���зֱ����P��A����ʽΪ��Galleon.Sickle.Knut���������1���ո�ָ�������Galleon��[0, 107]�����ڵ�������Sickle��[0, 17)�����ڵ�������Knut��[0, 29)�����ڵ�������

�����ʽ��

��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ�����

��������1��
10.16.27 14.1.28
�������1��
3.2.1
��������2��
14.1.28 10.16.27
�������2��
-3.2.1

*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	int a, b, c;
	int m, n, t;
	scanf("%d.%d.%d",&a,&b,&c);
	scanf("%d.%d.%d",&m,&n,&t);
	int flag;
	if(a>m || (a==m && b>n) || (a==m && b==n && c>t))
		flag=0;
	else 
		flag=1;

	int x,y,z;

	if(flag==1){
		if(t>=c){
			z = t-c;
		}else{
			z = t+29-c;
			n--;
		}

		if(n>=b){
			y = n-b;
		}else{
			y = n+17-b;
			m--;
		}

		x = m-a;
		cout<<x<<"."<<y<<"."<<z<<endl;
	}else if(flag==0){
		if(c>=t){
			z = c-t;
		}else{
			z = c+29-t;
			b--;
		}

		if(b>=n){
			y = b-n;
		}else{
			y=b+17-n;
			a--;
		}

		x = a-m;
		cout<<"-"<<x<<"."<<y<<"."<<z<<endl;
	}
	system("pause");
	return 0;
}