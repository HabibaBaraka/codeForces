//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
using namespace std;
#define Graph vector<vector<int>>
#include<set>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
int n;
bool vis[2111];


void  dfs(int i,int &l,Graph &graph)
{
	vis[i] = 1;
	for (auto it : graph[i])
	{
		
			l++; dfs(it, l, graph);
		
	}
}


int main()
{
	int n;
	cin >> n;
	Graph g(n);
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		if (m == -1)continue;
		g[i].push_back(m - 1);
	}
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			int l = 1;
			dfs(i, l, g);
			ans = max(ans, l);
		}
	}
	cout << ans;
}
