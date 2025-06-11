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
bool vis[10009];
vector<int>vc;
int step = 1;
void  dfs(int i, int parC, Graph& graph)
{

	if (vc[i] != parC)step++;
	for (auto it : graph[i])dfs(it, vc[i], graph);
}
void DG(int x, int y, Graph& g)
{
	g[x].push_back(y);

}

int main()
{
	int n;
	cin >> n;
	Graph g(n);
	for (int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		DG(x - 1, i, g);
	}

	vector<int>c(n);
	for (auto& it : c)cin >> it;
	vc = c;

	dfs(0, -1, g);
	cout << step;

	return 0;
}
