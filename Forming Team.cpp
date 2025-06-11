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
void  dfs(int cur,int&cnt,int&deg,Graph&graph)
{
	vis[cur] = 1;
	cnt++;
	deg += graph[cur].size();
	for (auto it : graph[cur])
	{
		if (!vis[it])
		{
			dfs(it, cnt,deg, graph);
		}
	}
	
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
			int deg = 0;
			(dfs(i, cnt, deg, graph));
				if (deg == 2 * cnt && cnt & 1)dlt++;//odd cycle
		}
	}
	if ((n - dlt) & 1)dlt++;
	cout << dlt;

	
}
