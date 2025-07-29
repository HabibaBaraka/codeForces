//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 3e5;
vector<bool>pr(N + 1, true);
void sieve(ll n) {//preroccing


	pr[0] = false, pr[1] = false;
	for (int i = 2; i <= n; i++) {
		if (pr[i]) {

			for (int j = 2 * i; j <= n; j += i) {

				pr[j] = false;
			}
		}
	}

}bool vis[N];
int  dfs(int i, gr& g)
{
	vis[i] = 1;
	int cnt = 1;
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			cnt += dfs(it, g);
		}
	}
	return cnt;

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;

	while (t--) {
		ll n;
		cin >> n;
		sieve(n + 10);
		gr g(n + 1);
		for (int i = 0; i < n - 1; i++)
		{
			int x, y;
			cin >> x >> y;
			if (!pr[x] && !pr[y])
			{
				g[x].push_back(y);
				g[y].push_back(x);
			}
		}
		ll ans = n * (n - 1) / 2;
		for (int i = 1; i <= n; i++)
		{
			if (!pr[i] && !vis[i])
			{
				int nodes = dfs(i, g);
				ans -= nodes * (nodes - 1) / 2;

			}
		}
		cout << ans; el;
	}
	return 0;
}
