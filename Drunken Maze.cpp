/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
//const char dir[] = { 'R','L','U','D' };

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;
int n, m;
char a[10005][10005];
bool vis[200005][4][4];
//bool vis2[10000][4][4];
int mn = INT_MAX;
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m  && a[i][j] != '#';
}
struct maze {
	
	pair<int, int>p;
	int cnt;
	int dist;
	int dir;

};
int  Bfs(pair<int, int> s, pair<int, int> e)
{
	queue<maze>q;
	for (int i = 0; i < 4; i++)
	{
		int x, y;
		x = s.first, y = s.second;
		int nx = x + dx[i], ny = y + dy[i];
		if (valid(nx, ny))
		{
			q.push({ {nx,ny},1,1,i });
			vis[nx*m+ny][i][1] = 1;
		}
	}
	while (!q.empty())
	{
		maze z = q.front();
	
		q.pop();
		if (z.p == e)
		{
			return z.dist;
			
		}
		for (int i = 0; i < 4; i++)
		{
			int x, y;
			x = z.p.first, y = z.p.second;
			int nx = x+ dx[i], ny = y+ dy[i];
			if (valid(nx, ny))
			{
				int nCnt = (i == z.dir) ? z.cnt + 1 : 1;
				if (nCnt > 3)continue;
				if (!vis[nx*m+ny][i][nCnt])
				{
					vis[nx*m+ny][i][nCnt] = 1;
					q.push({ {nx,ny},nCnt,z.dist + 1,i });
				}
				
			}
		}
	}
	return -1;
}


int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		cin >> n >> m;
		pair<int, int>s, t;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == 'S')
				{
					s = { i,j };
				}
				else if (a[i][j] == 'T')
				{
					t = { i,j };
				}
			}
		}
	cout<<	Bfs(s, t);
	//	mn == INT_MAX ? cout << -1 : cout << mn;
		el;
	}
}
