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
const ll  mod = 998244353;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e7 + 7;

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
		string s;
		cin >> s;
		char l=s[0], r=s[n-1];
		int i = 1;
		ll cntl = 1, cntr = 1;
		while (i<n&&s[i] == s[i - 1])
		{
			l = s[i];
			i++;
			cntl++;
			
		}
	    i = n - 2;
		while (i>=0&&s[i] == s[i + 1])
		{
			r = s[i];
			i--;
			cntr++;
			
		}
		if (cntl == n)
		{
			cntl = n / 2;
			cntr = n - cntl;
			cout << ((cntr + cntl + 1) % mod + (((cntl - 1) % mod * (cntr - 1) % mod) % mod) + (cntl - 1) % mod + (cntr - 1) % mod)%mod;
		}
		else
		{
			ll ans = 0;
			ans += cntr + cntl + 1;
			ans %= mod;
			if (l == r)
			{
				ans++;
				ans += (((cntl - 1) % mod * (cntr - 1) % mod) % mod) + (cntl - 1)%mod + (cntr - 1)%mod;
			}
			cout << ans%mod;
		}
	}

	return 0;
}
