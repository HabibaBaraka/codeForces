
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
void dfs(int i,Graph &graph)
{
	vis[i] = 1;
	for (auto it : graph[i])
	{
		if (!vis[it])dfs(it, graph);
	}
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
	for (int e = 0; e < m; e++)
	{
		int to, from;
		cin >> from >> to;
		UDG(graph, from-1, to-1);
	}
	vector<int>v;
	
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			ans++;
			dfs(i, graph);
			v.push_back(i + 1);
		}
	}
	
	cout << ans-1 << "\n";
	for (int i = 1; i < (long)v.size(); i++)
	{
		cout << v[i - 1] << " " << v[i]<<"\n";
	}
	

}
