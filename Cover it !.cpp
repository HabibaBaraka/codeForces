//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#define ll long long
using namespace std;
#define Graph vector<vector<int>>
#include<cstring>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
const int N = 2e5 + 5;

bool vis[N];
int color[N];
int step = 1;
void dfs(int i, Graph& g)
{
	vis[i] = 1;
	
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			color[it] = 1-color[i];
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
	int t = 1;
	cin >> t;
	while (t--) {
		
		int n, m;
		cin >> n >> m;
		memset(vis, 0, n);
		memset(color, 0, n);
		Graph g(n);

		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			UDG(x - 1, y - 1, g);
		}
		dfs(0, g);
		int cnt0 = 0;
		
		for (int i = 0; i < n; i++)
		{
			if (color[i] == 0)cnt0++;
		}
		if (cnt0 < n - cnt0) {

			cout << cnt0 << '\n';
			for (int i = 0; i < n; i++)
			{
				if (color[i] == 0)
					cout << i + 1 << " ";
			}

		}
		else
		{
			cout << n-cnt0 << '\n';
			for (int i = 0; i < n; i++)
			{
				if (color[i] == 1)
					cout << i + 1 << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}
