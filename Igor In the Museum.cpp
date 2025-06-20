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
char a[1004][1004];
int  vis[1004][1004];
int see[100005];
int mn = INT_MAX;
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m;
}
int cnt;
//dfs
void  dfs(int x,int y,int i)
{
	// base case 
	if (!valid(x, y))return;
	if(vis[x][y]!=0)return ;
	if(a[x][y]=='*'){
	  cnt++;
	  return;
	}
	// transition 
	vis[x][y] = i;
	for (int o = 0; o < 4; o++)
	{
		int nx = x + dx[o], ny = y + dy[o];
		if (valid(nx, ny))
		{
			
				dfs(nx, ny, i);
			
 
		}
	}
	
}
// bfs
void  bfs(pair<int,int>& s,int i)
{
	
	
	
	queue<pair<int,int>>q;
	q.push(s);
	vis[s.first][s.second] = i;
	while (!q.empty())
	{
		pair<int, int>p = q.front();
		
		q.pop();
		for (int o = 0; o < 4; o++)
		{
			int nx = p.first + dx[o], ny = p.second + dy[o];
			if (valid(nx, ny))
			{
				if (a[nx][ny] == '*')
				{

					cnt++;
				}
				else if(vis[nx][ny]==0){
					q.push({ nx,ny }); 
						vis[nx][ny] = i;
				}
			
				
			}

		}
	}
	
}
int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		int q;
		
		cin >> n >> m>>q;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		pair<int, int>s;
		for(int i=1;i<=q;i++){
			int x, y;
			cin >> x >> y;
			x--;
			y--;
			s = { x,y };
			cnt = 0;
			if (vis[x][y]==0)bfs(s,i);
			else cnt = see[vis[x][y]];
			see[i] = cnt;
			cout << cnt;
			el;
		}
	}
}
