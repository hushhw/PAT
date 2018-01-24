/*
1004. Counting Leaves (30)

A family hierarchy is usually presented by a pedigree tree. 
Your job is to count those family members who have no child.
Input

Each input file contains one test case. Each case starts with a line containing 0 < N < 100, the number of nodes in a tree, and M (< N), the number of non-leaf nodes. Then M lines follow, each in the format:

ID K ID[1] ID[2] ... ID[K]
where ID is a two-digit number representing a given non-leaf node, K is the number of its children, followed by a sequence of two-digit ID's of its children. For the sake of simplicity, let us fix the root ID to be 01.
Output

For each test case, you are supposed to count those family members who have no child for every seniority level starting from the root. The numbers must be printed in a line, separated by a space, and there must be no extra space at the end of each line.

The sample case represents a tree with only 2 nodes, where 01 is the root and 02 is its only child. Hence on the root 01 level, there is 0 leaf node; and on the next level, there is 1 leaf node. Then we should output "0 1" in a line.

Sample Input
2 1
01 1 02
Sample Output
0 1
*/

/*
题目大意：
	给出一棵树，问每一层各有多少个叶子结点。
*/

//dfs
/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

vector<int> v[100];
int book[100], maxdepth = -1;

void dfs(int index, int depth){
	if(v[index].size() == 0){
		book[depth]++;
		maxdepth = max(maxdepth, depth);
		return ;
	}
	for(int i=0; i < (v[index].size()); i++)
		dfs(v[index][i], depth+1);
}


int main(){
	int n, k, m, node, c;
	cin>>n>>m;//n结点总数，m非叶子节点数
	for(int i=0; i<m; i++){
		cin>>node>>k; //子节点数
		for(int j=0; j<k; j++){
			cin>>c;
			v[node].push_back(c);
		}
	}
	dfs(1, 0);	//从1号结点开始dfs
	cout<<book[0];
	for(int i=1; i<=maxdepth; i++)
		cout<<" "<<book[i];
	cout<<endl;
	system("pause");
	return 0;
}
*/

//bfs

#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
int level[100], book[100], maxlevel = -1;
vector<int> v[100];

void bfs(){
	queue<int> q;	//队列
	q.push(1);		//用来存储每个结点序号，1开始
	level[1] = 0;
	while(!q.empty()){
		int index = q.front();
		q.pop();
		maxlevel = max(level[index], maxlevel);
		if(v[index].size() == 0)
			book[level[index]]++;
		for(int i=0; i<v[index].size(); i++){
			q.push(v[index][i]);
			level[v[index][i]] = level[index]+1;
			cout<<"level:"<<level[v[index][i]]<<" i:"<<i<<endl;
		}
	}
}

int main(){
	int n, k, m, node, c;
	cin>>n>>m;//n结点总数，m非叶子节点数
	for(int i=0; i<m; i++){
		cin>>node>>k; //子节点数
		for(int j=0; j<k; j++){
			cin>>c;
			v[node].push_back(c);
		}
	}
	bfs();
	printf("%d", book[0]);
	for(int i = 1; i <= maxlevel; i++)
		printf(" %d", book[i]);
	system("pause");
	return 0;
}