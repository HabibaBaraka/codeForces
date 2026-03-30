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
bool good[2000];

bool check(ll n)
{
	bool vis[2000] = {};
	while (n != 1 && !vis[n])
	{
		ll temp = n, sum = 0;
		vis[n] = 1;
		while (temp > 0)
		{
			int d = temp % 10;
			sum += (d * d);
			temp /= 10;
		}
		n = sum;
	}
	return n == 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	for (int i = 1;i < 2000;i++)
	{
		good[i] = check(i);
	}
	vector<int>kth;
	ll x = 1;
	while (kth.size() < 1000)
	{
		
		s = to_string(x);
		ll sum = 0;
		bool f = 1;
		for (int i = 0;i < s.size();i++)
		{
			sum += (s[i] - '0') * (s[i] - '0');
			if (i > 0)
			{
				if (abs(s[i] - s[i - 1]) > 1)f = 0;
			}
		}
		if (f && good[sum])kth.push_back(x);
		x++;
	}
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		ll k;
		cin >> k;
		cout << kth[k-1];
		el
	}
	return 0;
}
