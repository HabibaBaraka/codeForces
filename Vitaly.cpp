
#include <iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;
#define ll long long
#define O "NO"
#define Y "YES"
//const ll N = 2e5 + 7;
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1};
const char dir[] = { 'R','L','U','D' };
#define Graph vector<vector<int>>
// FIFO

int ans = 0;
map<int, bool>vis;
int in, k;
void  Bfs(int i,Graph&g)
{
	queue<int>q;
	vector<int>deg(in + 1);
	int cnt = 0;
	for (int i = 1; i <= in; i++)
	{
		deg[i] = (int)g[i].size();
		if (deg[i] < 2) {
			vis[i] = 1; q.push(i); cnt++;
		}
	}
	while (k--&&!q.empty())
	{
		int nleaf=q.size();// whose will dlt
		int sz = (int)q.size();
		while (sz--)
		{
			int n = q.front();
			q.pop();
			deg[n] = 0;//dlt it
			for (auto it : g[n])
			{
				if (deg[it] > 0)deg[it]--;
				if (deg[it] <2 && !vis[it]) { vis[it] = 1; q.push(it);}

			}
			
		}
		ans += nleaf;
		
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
	cin >> t;
	while (t--)
	{
		vis.clear();
		ans = 0;
		cin >> in >> k;
		Graph g(in + 1);
		for (int i = 0; i < in - 1; i++)
		{
			int x, y;
			cin >> x >> y;
			UD(x, y,g);
	    }
		Bfs(1, g);
		cout << in-ans<<endl;
	}

}
