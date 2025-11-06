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
const int N = 2e5 + 9;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n, m;
		cin >> n >> m;
		multiset<ll>s;
		ll mx = 0;
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			s.insert(x);
			mx = max(mx, x);
		}
		vector<ll>z, a(m),c(m);
		vector<pair<ll, ll>>v;
		for (int i = 0; i < m; i++)cin >> a[i];
		for (int i = 0; i < m; i++)cin >> c[i];
		for (int i = 0; i < m; i++)
		{
			if (c[i] == 0)z.push_back(a[i]);
			else v.push_back({ a[i],c[i]});
		}
		sort(v.begin(), v.end());
		
		ll cnt = 0;
		ll nmx = mx;
		for (int i = 0; i < v.size(); i++)
		{
			auto itt = s.lower_bound(v[i].first);
		
			if (itt != s.end())
			{
				cnt++;
				ll ls = *itt;
				s.erase(itt);
				s.insert(max(ls, v[i].second));
			}


		}
		
		for (int i = 0; i < z.size(); i++)
		{
			auto itt = s.lower_bound(z[i]);
			if (itt != s.end())
			{
				cnt++;
				s.erase(itt);
			}
		}
		cout << cnt; el
	}
	return 0;
}
