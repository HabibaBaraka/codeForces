/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
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
ll mod = 1e9 + 7; ;
ll dp[1000003];
ll a[1000003];
ll n, capac;
ll calc(ll i)
{
	
	// base case
	if (i == n)return 0;
	ll& ret = dp[i];
	if (ret != -1)return ret;
	// transition 
	ll leave = calc(i + 1)+1;// dlt
	ll take = INT_MAX;
	if (i + a[i]+1 <= n)take = calc(i + a[i] + 1);// Blocks
	return ret=min(leave, take);
}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> a[i]; dp[i] = -1; }
		cout << calc(0);
		el;
	}
}
