
#include <iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;
#define ll long long
#define O "NO"
#define Y "YES"
const ll N = 2e5 + 7;
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1};
const char dir[] = { 'R','L','U','D' };
#define Graph vector<vector<int>>
// FIFO
int n, m;
//bool vis[N+5];
int Par[N+5] = { -1 };
ll ans = 1e18+1;
map<pair<ll, ll>, bool>allow;
map<pair<ll,ll>, bool>vis;

void  Bfs(pair<ll,ll>s,pair<ll,ll>e)
{
	
	queue<pair<pair<ll, ll>,ll>>q;
	q.push({ s,0 });
	vis[s] = 1;
	while (!q.empty())
	{
		pair<ll, ll>p = q.front().first;
		ll cost = q.front().second;
		q.pop();
		
		if (p == e)
		{
			ans = min(cost, ans);
		}
		for (int i = 0; i < 8; i++)
		{
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (allow[{nx, ny}] && !vis[{nx, ny}])
			{
				q.push({ {nx,ny},cost + 1 });
				vis[{nx, ny}] = 1;
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
		pair<ll, ll>s, e;
		cin >> s.first >> s.second >> e.first >> e.second;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			ll r, a, b;
			cin >> r >> a >> b;
			for (int j = a; j <= b; j++)
			{
				allow[{r, j}] = 1;
			}
		}
		Bfs(s,e);
		if (ans == 1e18)cout << -1;
		else cout << ans;
	}

}
