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
#include<cstring>
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
const ll  mod = 1e9+7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e5 + 9;
ll fp(ll base, ll p) {
	ll res = 1;
	while (p != 0) {
		if (p % 2 == 0) {
			p /= 2;
			base *= base;   //base *= base%mod can ignore it already mod
			base %= mod;
		}
		else {
			p--;
			res *= base%mod;
			res %= mod;
		}
	}
	return res;
}
bool vis[N];
int co[N];
bool dfs(int i, int c, gr& g) {
	vis[i] = 1;
	co[i] = c;
	for (auto it : g[i]) {
		if (!vis[it]) {
			if (!dfs(it, 1 - c, g)) return 0; // ← مهم جدًا
		}
		else if (co[it] == co[i]) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
//	cin >> tc;
	while (tc--)
	{
	  
		int n, m;
		cin >> n >> m;
		gr g(n + 1);
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		
			
		}
		ll cnt = 0;
		bool f=1;
		for (int i = 1; i <= n; i++)
		{
		  
			if (!vis[i])
			{
			  if(dfs(i, 0, g))cnt++;
			  else f=0;
			  
			}
		}
		if (!f)cout << -1;
		else cout << fp(2,cnt);
		el
	}
	return 0;
}
