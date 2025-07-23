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
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 101
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
int n,m;
char a[N][N];
bool can[N][N];
bool vis[N][N];
void block(int i, int j)
{
	
	if (i + 1 < n && a[i + 1][j] == '.')a[i + 1][j] = '#';
	if (j + 1 < m && a[i][j + 1] == '.')a[i][j + 1] = '#';
	if (i - 1 >= 0 && a[i - 1][j] == '.')a[i - 1][j] = '#';
	if (j - 1 >= 0 && a[i][j - 1] == '.')a[i][j - 1] = '#';
}
bool valid(int i, int j)
{
	return i < n && i >= 0 && j < m && j >= 0 && !can[i][j] && a[i][j] != '#';
}
void bfs(int i=n-1, int j=m-1)
{
	if (a[i][j] == '#')return;
	queue<pair<int, int>>q;
	q.push({i,j });
	
	can[i][j] = 1;
	while (!q.empty())
	{
		pair<int, int>p = q.front();
		q.pop();
		
	
		for (int o = 0; o < 4; o++)
		{
			int nx = dx[o] + p.first, ny = dy[o] + p.second;
			if (valid(nx, ny))
			{
				q.push({ nx,ny });
			
				can[nx][ny] = 1;
			}
		}

	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j ++)
			{
				cin >> a[i][j];
				
				can[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 'B')block(i,j);
				
			}
		}
		bfs();
		bool f = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 'B')
				{
					if (can[i][j])f = 0;
				}
				if (a[i][j] == 'G')
				{
					if (!can[i][j])f = 0;
				}

			}
		}
		f ? cout << Y : cout << O;
		
	}
	return 0;
}
