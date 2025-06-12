//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#define ll long long
using namespace std;
#define Graph vector<vector<int>>
#include<set>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
const int N = 5e4 + 5;
int n;
bool vis[N];
vector<ll>v(N);
int step = 1;
void  dfs(int i, int par, Graph& R)
{
	vis[i] = 1;
	v[i] = par+1;
	for (auto it : R[i])
	{
		if (!vis[it])
		{
			dfs(it, i, R);
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
	int n, r1, r2;
	cin >> n >> r1 >> r2;
	Graph R(n);
	r1--;
	r2--;

	for (int i = 0; i < n; i++)
	{
		if (i == r1)continue;
		int c;
		cin >> c;
		UDG(c-1, i, R);
	}
	dfs(r2, -1, R);
	for (int i = 0; i < n; i++)
	{
		if (i == r2)continue;
		cout << v[i] << " ";
	}
	return 0;
}
