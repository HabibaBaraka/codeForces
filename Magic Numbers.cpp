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
#include<string>
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
const ll  mod2 = 998244353;
const ll  mod = 1e9 + 7;
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e3 + 9;
#define oo LLONG_MAX
string s;
ll x,mul,ans;
int digit;
ll dp[2001][2][2001];
ll idk(ll idx, bool mx,ll rem)
{
	// base case 
	ll& ret = dp[idx][mx][rem];
	if (~ret)return ret;
	if (idx == s.size())return rem==0;
	ret = 0;
	int end = mx ? s[idx] - '0' : 9;
	//transition 
	if (idx % 2 == 1)
	{
		if (end < digit)return 0;
		return ret = idk(idx + 1, mx && (digit == end), ((rem * 10) + digit) % mul)%mod;
	}
	for (int i = 0;i <= end;i++)
	{
		if (i == digit)continue;
		 ret = (ret+idk(idx + 1, mx && (i == end), ((rem * 10) + i) % mul))%mod;
	}
	return ret;
}
bool check()
{
	bool f = 0;
	ll sum = 0;
	for (int i = 0;i < s.size();i++)
	{
		if (i % 2 == 1)
		{
			if (s[i] - '0' != digit)
			{
				f = 1;
				break;
			}
		}
		else
		{
			if (s[i] - '0' == digit)
			{
				f = 1;
				break;
			}
		}
		sum = (sum * 10) + s[i] - '0';
	}
	return sum % mul == 0 && !f;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//	cin >> tc;
	while (tc--)
	{
		memset(dp, -1, sizeof dp);
		string a, b;
		cin >> mul >> digit;
		cin >> a >> b;
		s = b;
		ll r = idk(0, 1, 0);
		ans = r;
		memset(dp, -1, sizeof dp);
		s = a;
		ll l = idk(0, 1, 0);
		ans = (ans - l + mod) % mod;
		if (check())ans++;
		cout << ans%mod;
	}
	return 0;
}
