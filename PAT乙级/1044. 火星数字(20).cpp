/*
1044. ��������(20)

����������13���Ƽ����ģ�

�����˵�0�������˳�Ϊtret��
����������1��12�Ļ����ķֱ�Ϊ��jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec��
�����˽���λ�Ժ��12����λ���ֱַ��Ϊ��tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou��
��������˵����֡�29������ɻ����ľ��ǡ�hel mar�����������ġ�elo nov����Ӧ�������֡�115����Ϊ�˷��㽻���������д����ʵ�ֵ���ͻ�������֮��Ļ��롣

�����ʽ��
�����һ�и���һ��������N��<100�������N�У�ÿ�и���һ��[0, 169)�����ڵ����� ���� �����ǵ����ģ������ǻ����ġ�

�����ʽ��
��Ӧ�����ÿһ�У���һ���������������һ�����Ե����֡�

����������
4
29
5
elo nov
tam
���������
hel mar
may
115
13
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string gg[13] = {"###", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string ss[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main(){
	int n;
	cin>>n;
	getchar();
	while(n--){
		string str;
		getline(cin, str);
		if(str[0]=='0'&&str.length()==1)
			cout<<"tret"<<endl;
		else if(str[0]>='0'&&str[0]<='9'){
			int num = stoi(str);
			int i=0, g=0,s=0;
			g = num%13;
			num = num/13;
			if(num!=0){
				s = num%13;
				if(g!=0)
					cout<<ss[s]<<" "<<gg[g]<<endl;
				else
					cout<<ss[s]<<endl;
			} else{
				cout<<gg[g]<<endl;
			}
		} else{
			if(str.length()==4){
				cout<<"0"<<endl;
			}else if(str.length()==3){
				for(int i=1; i<=12; i++){
					if(str[0]==gg[i][0] && str[1]==gg[i][1]&&str[2]==gg[i][2])
						cout<<i<<endl;
					else if(str[0]==ss[i][0] && str[1]==ss[i][1]&&str[2]==ss[i][2])
						cout<<13*i<<endl;
				}
			}else{
				int t1=0, t2=0;
				for(int i=1; i<=12; i++){
					if(str[0]==ss[i][0] && str[1]==ss[i][1] && str[2]==ss[i][2])
						t1 = i;
					if(str[4]==gg[i][0] && str[5]==gg[i][1] && str[6]==gg[i][2])
						t2 = i;
				}
				cout<<t1*13+t2<<endl;
			}
		}
	}
	system("pause");
	return 0;
}