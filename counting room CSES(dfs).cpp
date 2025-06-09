
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
using namespace std;
#define Graph vector<vector<int>>
#define  N  100005;
const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };
int n, m;
bool vis[1001][1001];
int ans;
char a[1001][1001];
bool valid(int x, int y)
{
	return (x >= 0 && x < n && y >= 0 && y < m && a[x][y]!='#' && !vis[x][y]);
}
void dfs(int i,int j)
{
	vis[i][j] = 1;
	for (int o = 0; o < 4; o++)
	{
		int nx = i + dx[o], ny = j + dy[o];
		if (valid(nx, ny))dfs(nx, ny);
	}
}

int main()
{

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!vis[i][j]&&a[i][j]=='.') { ans++; dfs(i, j); }
		}
	}
	cout << ans;
}
