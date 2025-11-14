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
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e3 + 9;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		ll n, m, x, y;
		cin >> n >> m >> x >> y;
		ll a[1004][1004] = {};
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)cin >> a[i][j];
		}
		// prefix
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				a[i][j] += a[i - 1][j];
				a[i][j] += a[i][j - 1];
				a[i][j] -= a[i - 1][j - 1];
			}
		}
		// clc
	
		ll mx = LLONG_MIN;
		for (int i = x; i <= n; i++)
		{
			for (int j = y; j <= m; j++)
			{
				int x2 = i - x+1;
				int y2 = j - y+1;
			
				{
					ll sum = a[i][j] - a[i][ y2- 1] - a[x2 - 1][j] + a[x2 - 1][y2 - 1];
					mx = max(mx, sum);
			
				}
			}
		}
		cout << mx;
	

	}
	return 0;
}
