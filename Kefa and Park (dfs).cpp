
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
using namespace std;
#define Graph vector<vector<long>>
#define  N  100005;
const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };
const char dir[] = { 'R','L','D','U' };
long n, m;
bool vis[200005];
int ans;
vector<int>v;
bool pre = 0;
void dfs(int i,Graph &graph,int cnt)
{
	vis[i] = 1;
	if (cnt > m)return;
	if (v[i] == 0)cnt = 0;
	bool leaf = 1;
	for (auto it : graph[i])
	{
		
		if (!vis[it])
		{
				dfs(it, graph, cnt + v[it]);
				leaf = 0;
		}
	}
	ans += leaf;
}
void UDG(Graph& graph, int from, int to)
{
	graph[from].push_back(to);
	graph[to].push_back(from);
}
int main()
{

	
	cin >> n >> m;
	Graph graph(n);
	
	
	for (int i = 0; i < n; i++) { int x; cin >> x; v.push_back(x); }
	
	for (int e = 0; e < n-1; e++)
	{
		int to, from;
		cin >> from >> to;
		UDG(graph, from - 1, to - 1);
	}
	dfs(0, graph,v[0]);
	cout << ans;
	
	
}
