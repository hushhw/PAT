/*
1065. ����(25)

�������������Ķ��ڵ�����ʿ��һ�ְ��ơ���������������˵Ĵ����ɶ����ҳ��䵥�Ŀ��ˣ��Ա��������ذ���

�����ʽ��

�����һ�и���һ��������N��<=50000��������֪����/���µĶ�����
���N�У�ÿ�и���һ�Է���/���¡���Ϊ���������ÿ�˶�Ӧһ��ID�ţ�Ϊ5λ���֣���00000��99999����ID���Կո�ָ���
֮�����һ��������M��<=10000����Ϊ�μ��ɶԵ������������һ�и�����Mλ���˵�ID���Կո�ָ�����Ŀ��֤�����ػ��Ų���������

�����ʽ��

���ȵ�һ������䵥���˵������������ڶ��а�ID����˳���г��䵥�Ŀ��ˡ�ID����1���ո�ָ����е���β�����ж���ո�

����������
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
���������
5
10000 23333 44444 55555 88888
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main() {
	int n, a, b, m;
	scanf("%d", &n);
	vector<int> couple(100000, -1);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		couple[a] = b;
		couple[b] = a;
	}
	scanf("%d", &m);
	vector<int> guest(m), isExist(100000);
	for (int i = 0; i < m; i++) {
		scanf("%d", &guest[i]);
		if (couple[guest[i]] != -1)		//������������ż
			isExist[couple[guest[i]]] = 1;	//������ż���
	}
	set<int> s;
	for (int i = 0; i < m; i++) {
		if (!isExist[guest[i]])		//����û�б���ǵľ����䵥�Ļ��ߵ���ģ���Ϊֻ����ż�����ǲŻ��ų����⣩
			s.insert(guest[i]);
	}
	printf("%d\n", s.size());
	for (auto it = s.begin(); it != s.end(); it++) {
		if (it != s.begin()) printf(" ");
		printf("%05d", *it);
	}
	return 0;
}

/*23�֡�����
int main(){
	int n,m;
	cin>>n;
	int a,b,c[100001]={0};
	for(int i=1; i<=n; i++){
		cin>>a>>b;
		c[a]=c[b]=i;
	}
	cin>>m;
	int count = m;
	int *d = new int[m];
	for(int i=0; i<m; i++)
		cin>>d[i];
	sort(d, d+m);

	for(int i=0; i<m; i++){
		if(c[d[i]]!=0 && c[d[i]]!=-1){
			for(int j=i+1; j<m; j++){
				if(c[d[i]]==c[d[j]]){
					count-=2;
					c[d[i]]=c[d[j]]=-1;
				}
			}
		}
	}
	cout<<count<<endl;
	bool flag=false;
	for(int i=0; i<m; i++){
		if(c[d[i]]!=-1){
			if(flag)
				cout<<" ";
			printf("%05d", d[i]);
			flag=true;
		}
	}
	cout<<endl;
	delete[] d;
	system("pause");
	return 0;
}
*/