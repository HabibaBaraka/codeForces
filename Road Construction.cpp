
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#include<set>
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

	
	cin >> n>>m;
	Graph graph(n);
	
	
	set<int>s;
	
	for (int e = 0; e < m; e++)
	{
		int x,y;
		cin >> x >> y;
		s.insert(x);
		s.insert(y);

	}
	int r;
	for (int i = 1; i <= n; i++)
	{
		if (!s.count(i))
		{
			r = i;
		}
	}
	cout << n - 1 << "\n";
	for (int i = 1; i <= n; i++)
	{
		if (i != r)
		{
			cout << r << " " << i << "\n";

		}
	}

	
}
