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
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	int k;
	cin >> k;
	
	vector<ll>dp(1e6+1, 0);
	dp[0] = 0;
	for (int i = 1; i < k; i++)
	{
		dp[i] = 1;
	}
	dp[k] = 2;
	for (int i = k+1; i <= 1e6; i++)
	{
		dp[i] = dp[i - 1]%mod;
		
		if (i - k >= 0)dp[i] += dp[i - k]%mod;
		dp[i] %= mod;
	}
	vector<ll>p(1e6 + 1, 0);
	for (int i = 1; i <= 1e6; i++)
	{
		p[i] = (p[i - 1] + dp[i]);
		
	}
	while (t--) {
		
		int a, b;
		cin >> a >> b;
		ll ans = ((p[b] % mod - p[a - 1] % mod) + mod) % mod;
		cout <<ans;
		el;
	}
	return 0;
}
