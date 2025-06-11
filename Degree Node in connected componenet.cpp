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
bool vis[300000];

enum status {chain=0,cycle=1};
void  dfs(int i,long long&cnt,long long&deg,Graph&graph,bool&f)
{
	vis[i] = 1;
	cnt++;
	deg += graph[i].size();
	if(graph[i].size()!=2)f=0;
	for (auto it : graph[i])
	{
		if (!vis[it])
		{
			dfs(it, cnt,deg, graph,f);
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
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			long long cnt = 0;
			long long deg = 0;
			bool f=1;
			(dfs(i, cnt, deg, graph,f));
				if (deg == 2 * cnt&&f )ans++;//odd cycle
		}
	}
cout<<ans;
	
}
