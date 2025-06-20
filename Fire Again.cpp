/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
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
char a[2009][2009];
bool  vis[2009][2009];
int  dist[2009][2009];
queue<pair<int, int>>q;
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m;
}



int main()

{

	freopen("input.txt", "r", stdin);    
	freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		memset(dist, -1, sizeof dist);
		cin >> n >> m;

		int k;
		cin >> k;

		while (k--)
		{
			int x, y;

			cin >> x >> y;
			x--, y--;
			a[x][y] = 'f';
			q.push({ x,y });
			dist[x][y] = 0;
		}

		while (!q.empty())
		{
			pair<int, int>p = q.front();

			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int nx = p.first + dx[i], ny = p.second + dy[i];
				if (valid(nx, ny) && dist[nx][ny] == -1)
				{
					q.push({ nx,ny });

					dist[nx][ny] = dist[p.first][p.second] + 1;
				}
			}
		}


		int lx, ly, mx = 0;;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
			
				if (dist[i][j] >= mx)
				{
					mx = dist[i][j];
					lx = i, ly = j;
				}
			}
		}
		cout << lx + 1 << " " << ly + 1;
		el;
	}
}
