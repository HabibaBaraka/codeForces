
#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define O "NO"
#define Y "YES"
const ll N = 1e5 + 7;
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
const char dir[] = { 'R','L','U','D' };
vector<pair<int, int>>g[N];
// FIFO
int n, m;
bool vis[2000][2000];
char a[2000][2000];
string ans = O;
string Path="";
int co = 0;
struct node
{
	int x, y, cost;
	
	node(int x,int y,int cost):x(x),y(y),cost(cost){}
};
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m && (a[i][j] == '.' || a[i][j] == 'B');
}
void  Bfs(int stx,int sty,int edx, int edy)
{
	queue<node>q;
	q.push({ stx,sty,0});
	while (!q.empty())
	{
		node v = q.front();
		q.pop();
		
		if (v.x == edx && v.y == edy)
		{
			co = v.cost;
			ans = Y;
		

			return;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				int nx = v.x + dx[i], ny = v.y + dy[i];
				if (valid(nx, ny))
				{
					q.push(node(nx, ny, v.cost + 1));
					a[nx][ny] = dir[i];
				}
			}
		}
	}


}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)
	{

		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		int stx, sty, edx, edy;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 'A')
				{
					stx = i, sty = j;
				}
				else if (a[i][j] == 'B')
				{
					edx = i, edy = j;
				}
			}
		}
		Bfs(stx, sty, edx, edy);
		cout << ans<<'\n';
		if (ans == Y)
		{
			cout << co << '\n';
			int i = edx, j = edy;
			while (i != stx || j != sty)
			{
				Path += a[i][j];
				if (a[i][j] == 'L')j++;
				else if (a[i][j] == 'R')j--;
				else if (a[i][j] == 'U')
				{
					//i-1 j
					i++;
				}
				else if (a[i][j] == 'D')
				{
					//i+1 j
					i--;
				}


			}
			reverse(Path.begin(), Path.end());
			cout << Path;
		}
	}

}
