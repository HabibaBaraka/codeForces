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
#include<set>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 100000+9;
set<int>s;
void  dfs(int i, int p,int c, gr& g) {
	if (c)s.insert(i);
	for (auto it : g[i]) {
		if (it!=p) dfs(it, i, 1 - c, g);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		gr g(n + 1);
		for (int i = 0; i < n - 1; i++)
		{
			int x; int y;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		dfs(1,-1,1,g);
		ll cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (!s.count(i))cnt += s.size() - g[i].size();
		}
		cout << cnt;
		el;
	}
	return 0;
}
