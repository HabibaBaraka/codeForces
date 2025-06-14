#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define O "NO"
#define Y "YES"
const ll N = 2e5 + 7;
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
const char dir[] = { 'R','L','U','D' };
#define Graph vector<vector<int>>
// FIFO
int n, m;
bool vis[N+5];
int Par[N+5] = { -1 };
ll ans = 1e18;
vector<int>va;
void  Bfs(int i,int ed,Graph&g)
{
	
	queue<pair<int, int>>q;
	q.push({ i,1 });
	while (!q.empty())
	{
		
		pair<int,int>p= q.front();
		q.pop();
		int idx = p.first;
		int cost = p.second;
		
		vis[idx] = 1;
		if (idx == ed)
		{
			if (ans > cost)
			{
				ans = cost;
			}
 
		}
		else 
		{
			for (auto it : g[idx])
			{
				if (!vis[it])
				{
					q.push({it,cost+1});
					Par[it] = idx;
					vis[it] = 1;
				}
			}
		}
		
	}
 
 
}
void UD(int x, int y, Graph& g)
{
	g[x].push_back(y);
	g[y].push_back(x);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)
	{
		cin >> n >> m;
		Graph g(n + 1);
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			UD(x, y, g);
		}
		Bfs(1,n, g);
		if (ans == 1e18)
		{
			cout << "IMPOSSIBLE";
		}
		else {
			cout << ans << endl;
			int i = n;
			va.push_back(n);
			while (Par[i] != -1)
			{
				va.push_back(Par[i]);
				i = Par[i];
			}
			reverse(va.begin(), va.end());
			for (int i=1;i<=ans;i++)
			{
				cout << va[i] << " ";
			}
		}
	}
 
}
