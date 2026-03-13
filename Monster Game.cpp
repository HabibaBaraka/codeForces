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
#define oo LLONG_MAX
int n;
bool can(ll x,vector<ll>&a, vector<ll>&b,int& levels)
{
	ll cnt = n - (lower_bound(a.begin(), a.end(), x)- a.begin());
    levels = upper_bound(b.begin(), b.end(), cnt)-b.begin();
	//cout << x<<' '<<levels * x << '\n';
	return levels > 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		
		cin >> n;
		vector<ll>a(n), b(n);
		for (auto& it : a)cin >> it;
		for (auto& it : b)cin >> it;
		sort(a.begin(), a.end());
		for (int i = 1;i < n;i++)b[i] += b[i - 1];
		ll l = 1, r = 1e9 + 10, mid, ans=-1,mx=-1;
		for (int i = 0;i < n;i++)
		{
			int levels = 0;
			if (can(a[i], a, b, levels))
			{
				mx = max(mx, a[i] * levels);
			}
		}
	
		cout << mx;
		el
	}
	return 0;
}
