/*
1065. 单身狗(25)

“单身狗”是中文对于单身人士的一种爱称。本题请你从上万人的大型派对中找出落单的客人，以便给予特殊关爱。

输入格式：

输入第一行给出一个正整数N（<=50000），是已知夫妻/伴侣的对数；
随后N行，每行给出一对夫妻/伴侣——为方便起见，每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；
之后给出一个正整数M（<=10000），为参加派对的总人数；随后一行给出这M位客人的ID，以空格分隔。题目保证无人重婚或脚踩两条船。

输出格式：

首先第一行输出落单客人的总人数；随后第二行按ID递增顺序列出落单的客人。ID间用1个空格分隔，行的首尾不得有多余空格。

输入样例：
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
输出样例：
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
		if (couple[guest[i]] != -1)		//如果这个人有配偶
			isExist[couple[guest[i]]] = 1;	//把其配偶标记
	}
	set<int> s;
	for (int i = 0; i < m; i++) {
		if (!isExist[guest[i]])		//所有没有被标记的就是落单的或者单身的（因为只有配偶互相标记才会排除在外）
			s.insert(guest[i]);
	}
	printf("%d\n", s.size());
	for (auto it = s.begin(); it != s.end(); it++) {
		if (it != s.begin()) printf(" ");
		printf("%05d", *it);
	}
	return 0;
}

/*23分。。。
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