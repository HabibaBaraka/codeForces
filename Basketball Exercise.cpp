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
const int N = 2e5 + 5;
ll mod = 1e9 + 7; ;
ll dp[3][N];
ll a[2][N];
ll n;

ll calc(ll i,int lastR)
{
	
	// base case
	if (i == n)return 0;
	ll& ret = dp[lastR][i];
	if (~ret)return ret;
	// transition 
	ret = calc(i + 1, lastR);
	if (lastR != 1)
		ret = max(calc(i + 1, 1)+a[1][i], ret);
	if (lastR != 0)
		ret = max(calc(i + 1, 0)+a[0][i], ret);
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
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++) { cin >> a[i][j]; }
		}
		cout << calc(0, 2);
		el;
	}
}
