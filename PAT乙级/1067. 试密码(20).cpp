/*
1067. ������(20)

������ͼ��¼ĳ��ϵͳȴ��������ʱ��ϵͳһ��ֻ�������㳢�����޶�Σ��������������ʱ���˺žͻᱻ���������������ʵ�����С���ܡ�

�����ʽ��

�����ڵ�һ�и���һ�����루���Ȳ�����20�ġ��������ո�Tab���س��ķǿ��ַ�������һ��������N��<= 10�����ֱ�����ȷ�������ϵͳ�����ԵĴ�����
���ÿ�и���һ���Իس������ķǿ��ַ��������û�������������롣���뱣֤������һ�γ��ԡ�������һ��ֻ�е���#�ַ�ʱ�����������������һ�в����û������롣

�����ʽ��

���û���ÿ�����룬�������ȷ�������ҳ��Դ���������N������һ���������Welcome in��������������
����Ǵ���ģ�����һ���а���ʽ�����Wrong password: �û�����Ĵ������롱���������ԴﵽN��ʱ�������һ�С�Account locked��������������

��������1��
Correct%pw 3
correct%pw
Correct@PW
whatisthepassword!
Correct%pw
#
�������1��
Wrong password: correct%pw
Wrong password: Correct@PW
Wrong password: whatisthepassword!
Account locked
��������2��
cool@gplt 3
coolman@gplt
coollady@gplt
cool@gplt
try again
#
�������2��
Wrong password: coolman@gplt
Wrong password: coollady@gplt
Welcome in
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string password, pass;
	int n;
	cin>>password>>n;
	getchar();
	while(1){
		getline(cin, pass);
		if(pass=="#"){
			break;
		} else if(pass!=password){
			cout<<"Wrong password: "<<pass<<endl;
			n--;
		} else{
			cout<<"Welcome in"<<endl;
			break;
		}
		if(n==0){
			cout<<"Account locked"<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}