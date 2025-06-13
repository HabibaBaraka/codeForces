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
char a[100][100];
bool vis[100][100];
enum state {cycle=1,chain=0 };
bool valid(int i, int j,char c)
{
	return (i >= 0 && i < n && j >= 0 && j < m &&a[i][j]==c);
}
state  dfs(int i,int j,int parx,int pary)
{
	
	   vis[i][j] = 1;
	for (int o = 0; o < 4; o++)
	{
		int nx, ny;
		nx = i + dx[o], ny = j + dy[o];
		if (nx == parx && ny == pary)continue;
		if (valid(nx, ny,a[i][j]))
		{
			if (vis[nx][ny])return cycle;
			if(dfs(nx, ny,i,j))return cycle;
		
		}
	}
	return chain;
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
		
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		bool f = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
			{
				if (!vis[i][j])
				{
					if (dfs(i, j, i, j)) { f = 1; break;; }
				}
			}
		}

		f ? cout << "Yes\n" : cout << "No\n";
	
	}
	return 0;
}
