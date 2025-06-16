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
int in;
//bool vis[N+5];
int Par[N+5] = { -1 };
ll ans = 1e18+1;
map<int, bool>vis;
bool  Bfs(vector<int>&a)
{
	queue<pair<int, int>>q;
	q.push({0,0});
	
	while (!q.empty())
	{
		pair<int, int>p = q.front();
		int i = p.first;
		q.pop();
		if (i>0&&i == in)
		{
			if (p.second == 0 || p.second % 360 == 0)return 1;
		}
		int sum = p.second;
		if (i<in)
		{
			q.push({i+1,sum + (-a[i]) });
		
		}
		if (i<in)
		{
			q.push({i+1,sum + (a[i])});
		
		}

	}
	return 0;
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
		
		cin >> in;
		vector<int>a(in);
		for (auto& it : a)cin >> it;
		Bfs(a)?cout<<Y:cout<<O;
	}

}
