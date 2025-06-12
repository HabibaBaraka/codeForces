//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#include<iomanip>
#define ll long long
using namespace std;
#include<unordered_map>
#define Graph vector<vector<ll>>
#include<map>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
const int N = 1e5 + 5;

map<ll,bool>vis;

double dfs(ll i, Graph& g)
{
	vis[i] = 1;
	double len = 0, cnt = 0;
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			cnt++;// not vis child
			len+=1+dfs(it, g);
		}
	}
	if (!cnt)return 0;
	return len / cnt;

}
void UDG(int x, int y, Graph& g)
{
	g[y].push_back(x);
	g[x].push_back(y);
}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		
		int n, m;
		cin >> n;
		
		Graph g(n);

		for (int i = 0; i < n-1; i++)
		{
			ll x, y;
			cin >> x >> y;
			UDG(x-1, y-1, g);
		}
		double ans = dfs(0, g);
		cout << fixed << setprecision(15) << ans;
	}
	return 0;
}
