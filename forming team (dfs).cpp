//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
using namespace std;
#define Graph vector<vector<int>>
#include<set>
const int dx[] = { 0,0,-1 };
const int dy[] = { 1,-1,0 };
const string dir[] = { "right","left","forth" };
int n, m;
bool vis[1001];

enum status {chain=0,cycle=1};
bool dfs(int cur,int par,int&cnt,Graph&graph)
{
	if (vis[cur])return 1;//cycle
	vis[cur] = 1;
	for (auto it : graph[cur])
	{
		if (it!=par)
		{
			cnt++;
			if (dfs(it, cur, cnt, graph))return 1;
		}
	}
	return 0;//chain
}




void UDG(int x, int y, Graph& graph)
{
	graph[x].push_back(y);
	graph[y].push_back(x);
}
int main()
{

	cin >> n >> m;
	Graph graph(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		UDG(x-1, y-1, graph);
	}
	int dlt = 0;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			int cnt = 0;
			if (dfs(i, -1, cnt, graph))
			{
				if (cnt & 1)dlt++;
			}
		}
	}
	if ((n - dlt) & 1)dlt++;
	cout << dlt;

	
}
