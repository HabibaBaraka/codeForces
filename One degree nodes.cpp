//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#define ll long long
using namespace std;
#include<unordered_map>
#define Graph unordered_map<ll,vector<ll>>
#include<map>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
const int N = 1e5 + 5;

map<ll,bool>vis;
int color[N];
int step = 1;
void dfs(ll i, Graph& g)
{
	vis[i] = 1;
	cout << i << " ";
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			
			dfs(it, g);
		}
	}

}
void UDG(int x, int y, Graph& g)
{
	g[y].push_back(x);
	g[x].push_back(y);
}

int main()
{
  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t--) {
		
		int n, m;
		cin >> n;
		
		Graph g;

		for (int i = 0; i < n; i++)
		{
			ll x, y;
			cin >> x >> y;
			UDG(x, y, g);
		}
		for (auto it : g)
		{
			if (it.second.size() == 1) { dfs(it.first, g); break; }
		}
		
	}
	return 0;
}
