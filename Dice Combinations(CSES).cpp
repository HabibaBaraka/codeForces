#include<iostream>
/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include<climits>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;

ll mod = 1e9 + 7;
ll dp[1000009];
int n;
ll dice(ll s = n)
{
	// base case 
	if (s==0)return 1;
	if (s < 0)return 0;
	ll& ret = dp[s];
	if (~ret)return ret;
	// transition 
	ret = 0;
	for (int i = 1; i <= 6; i++)
	{
		ret += dice(s - i) % mod;
		ret %= mod
			;
	}
	return ret;
}
ll dice2(ll s = 0)
{
	// base case 
	if (s > n)return  0;
	if (s == n)return 1;
	ll& ret = dp[s];
	if (ret != -1)return ret;
	// transition 
	ret = 0;
	for (int i = 1; i <= 6; i++)
	{
		ret += dice2(s + i) % mod;
		ret %= mod;
	}
	return ret;
}

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		memset(dp, -1, sizeof dp);
		cin >> n;
		cout << dice();
		el;
	}
}
