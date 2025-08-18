// New Level===New Part.cpp 
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<stack>
#include<map>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
#define Baraka ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
int n, m;
bool vis[600][600];
char a[600][600];
int s1, s2, e1, e2;
bool valid(int i, int j)
{
	return i > 0 && i <= n && j > 0 && j <= m && a[i][j] =='.' && !vis[i][j];
}
bool bfs(pair<int, int>& st)
{
	queue<pair<int, int>>q;
	q.push(st);
	vis[st.first][st.second] = 1;
	
	while (!q.empty())
	{
		pair<int, int>p= q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int x = dx[i] + p.first, y = dy[i] + p.second;
			if (x == e1&& y ==e2)return 1;
			if (valid(x, y))
			{
				q.push({ x,y });
					vis[x][y]=1;
			}
		}
	}
	return 0;
}
int main()
{
	Baraka
	int t = 1;
	//cin >> t;
	while (t--)
	{
		memset(vis, 0, sizeof vis);
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
			}
		}
		cin >> s1 >> s2 >> e1 >> e2;
		int nib = 0;
		for (int i = 0; i < 4; i++)
		{

			int nx = e1 + dx[i];
			int ny = e2 + dy[i];
			if (nx>0&&nx<=n&&ny>0&&ny<=m)
			{
				if (a[nx][ny] == '.' || (nx == s1 && ny == s2))nib++;
			}
		}
		if (s1 == e1 && s2 == e2)
		{
			if (nib)cout << Y; else cout << O;
		}
		else
		{
			pair<int, int>p = { s1,s2 };
			bool f=bfs(p);
			if (a[e1][e2] == 'X' && f)cout << Y;
			else if (nib > 1 && f)cout << Y;
			else cout << O;
		}
		el;

	}
	return 0;
}
