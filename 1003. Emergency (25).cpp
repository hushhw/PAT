/*
1003. Emergency (25)

As an emergency rescue team leader of a city, you are given a special map of your country. 
The map shows several scattered cities connected by some roads. 
Amount of rescue teams in each city and the length of each road between any pair of cities are marked on the map. 
When there is an emergency call to you from some other city, 
your job is to lead your men to the place as quickly as possible, 
and at the mean time, call up as many hands on the way as possible.

Input

Each input file contains one test case. 
For each test case, the first line contains 4 positive integers: 
N (<= 500) - the number of cities (and the cities are numbered from 0 to N-1), 
M - the number of roads, 
C1 and C2 - the cities that you are currently in and that you must save, respectively. 
The next line contains N integers, where the i-th integer is the number of rescue teams in the i-th city. 
Then M lines follow, each describes a road with three integers c1, c2 and L, 
which are the pair of cities connected by a road and the length of that road, respectively. 
It is guaranteed that there exists at least one path from C1 to C2.

Output

For each test case, print in one line two numbers: 
	the number of different shortest paths between C1 and C2, 
	and the maximum amount of rescue teams you can possibly gather.
All the numbers in a line must be separated by exactly one space, 
and there is no extra space allowed at the end of a line.

Sample Input
5 6 0 2
1 2 1 5 3
0 1 1
0 2 2
0 3 1
1 2 1
2 4 1
3 4 1
Sample Output
2 4
*/

/*
题目大意：
n个城市m条路，每个城市有救援小组，所有的边的边权已知。
给定起点和终点，求从起点到终点的最短路径条数以及最短路径上的救援小组数目之和。
如果有多条就输出点权（城市救援小组数目）最大的那个
*/


/*
dfs解法(深搜）

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n, m, c1, c2;
int final_len = 10000, final_team, routes;
int isVisited[500];		//标记数组
int teams[500];			//存储每个城市救援队数
int cities[500][500];	//存储两个城市之间路径

void dfs(int cur, int dest, int len, int team, int n)
{
	if(cur == dest){
		if(final_len > len){
			final_len = len;
			routes = 1;
			final_team = team;
		} else if(final_len == len){
			routes += 1;
			final_team = (final_team > team ? final_team : team);
		}
		return ;
	}
	for(int i=0; i<n; i++){
		if(!isVisited[i] && cities[cur][i] != 0){
			isVisited[i] = 1;
			dfs(i, dest, len+cities[cur][i], team + teams[i], n);
			isVisited[i] = 0;
		}
	}
}

int main()
{
	while(scanf("%d%d%d%d",&n,&m,&c1,&c2)!=EOF)
	{
		for(int i=0; i<n; i++){
			cin>>teams[i];
		}
		for(int i=0; i<m; i++){
			int a = 0, b = 0, l = 0;
			cin>>a>>b>>l;
			cities[a][b] = cities[b][a] = l;
		}

		isVisited[c1] = 1;
		dfs(c1, c2, 0, teams[c1], n);
		cout<<routes<<" "<<final_team<<endl;
	}

	return 0;
}

*/
//Dijkstra算法
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, m, c1, c2;
int e[510][510];	//存储路径
int weight[510];	//存储每个位置救援队数
int dis[510];		//存储出发点到i结点路径长度
int num[510];		//最短路径条数
int w[510];			//救援队数目之和
bool visit[510];
const int inf = 99999999;

int main(){
	while(cin>>n>>m>>c1>>c2){
		for(int i=0; i<n; i++){
			cin>>weight[i];
		}
		fill(e[0], e[0]+510*510, inf);
		fill(dis, dis+510, inf);
		int a, b, c;
		for(int i = 0; i < m; i++) {
			cin>>a>>b>>c;
			e[a][b] = e[b][a] = c;
		}
		dis[c1] = 0;
		w[c1] = weight[c1];
		num[c1] = 1;
		for(int i=0; i<n ;i++){
			int u = -1, minn = inf;
			cout<<"-------------"<<endl;
			for(int j=0; j<n; j++){
				if(visit[j] == false && dis[j]<minn){
					u = j;
					
					minn = dis[j];
					cout<<"minn:"<<minn<<endl;
				}
			}
			if(u == -1) break;
			visit[u] = true;
			for(int v=0; v<n; v++){
				if(visit[v] == false && e[u][v] != inf){
					if(dis[u]+e[u][v] < dis[v]){
						dis[v] = dis[u] + e[u][v];
						num[v] = num[u];
						w[v] = w[u] + weight[v];
					}else if(dis[u]+e[u][v] == dis[v]){
						num[v] = num[v] + num[u];
						if(w[u] + weight[v] > w[v])
							w[v] = w[u] + weight[v];
					}
					cout<<"dis[v]:"<<dis[v]<<" v:"<<v<<endl;
				}
			}
		}
		cout<<num[c2]<<" "<<w[c2]<<endl;
	}
	return 0;
}