//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#include<iomanip>
#define ll long long
using namespace std;
#include<unordered_map>
#define Graph vector<vector<ll>>
#include<map>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
const int N = 1e5 + 5;
int n, m,k;
char a[505][505];
bool vis[505][505];
enum state {cycle=1,chain=0 };
bool valid(int i, int j)
{
	return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]&&a[i][j]!='#'&&a[i][j]!='X');
}
void  dfs(int i,int j)
{
	vis[i][j] = 1;
	for (int o = 0; o < 4; o++)
	{
		int nx, ny;
		nx = i + dx[o], ny = j + dy[o];
		if (valid(nx, ny))
		{
			dfs(nx, ny);
			if (k > 0) {
				a[nx][ny] = 'X'; k--;
			}
			
		}
	}
}


void UDG(int x, int y, Graph& g)
{
	g[y].push_back(x);
	g[x].push_back(y);
}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n >> m;
		
		cin >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == '.'&&!vis[i][j])
				{
					dfs(i, j);
					cnt++;
				}
			}
		}

		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
			{
				cout << a[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}
