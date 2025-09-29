/*
	The Cow (2:28)

كَيْفَ تَكْفُرُونَ بِٱللَّهِ وَكُنتُمْ أَمْوَٰتًۭا فَأَحْيَـٰكُمْ ۖ ثُمَّ يُمِيتُكُمْ ثُمَّ يُحْيِيكُمْ ثُمَّ إِلَيْهِ تُرْجَعُونَ ٢٨

How can you deny Allah? You were lifeless and He gave you life,
then He will cause you to die and again bring you to life,
and then to Him you will ˹all˺ be returned.
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9+7;

#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 300000;
bool vis[N];
int n, m;
int co[N];
bool dfs(int i,int c, gr& g)
{
	vis[i] = 1;
	co[i] = c;
	
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			if (!dfs(it, 1 - c, g))return 0;
		}
		else if (co[it] != 1 - c)return 0;
		
	}
	return 1;
	
}

void UDG(int u, int v,gr&g)
{
	g[u].push_back(v);
	g[v].push_back(u);
	
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		gr g(n + 1);
		for (int i = 1; i <= n; i++)co[i] = -2;
		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u>> v;
			UDG(u, v, g);
			co[u] = -1;
			co[v] = -1;
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if(!vis[i]&&co[i]==-1)
			{ 
			
				if (!dfs(i, 1, g))
				{
					cout << -1;
					return 0;
				}
				
			}
		}
		vector<int>a, b;
		for (int i = 1; i <= n; i++)
		{
		
			if (co[i]==1)a.push_back(i);
			else if(co[i]==0) b.push_back(i);
		}
		
		cout << a.size();
		el
			for (auto it : a)cout << it << ' ';
		el
			cout << b.size();
		el
			for (auto it :b)cout << it << ' ';
		
	}
	return 0;
}
