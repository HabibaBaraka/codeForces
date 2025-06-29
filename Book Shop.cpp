/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
/*
int dp[111];
int s, n;

int way(int s)
{
	//base case
	if (s == n)return 1;
	int& ret = dp[s];
	if (~ret)return ret;
	//transition
	return ret = way(s + 1) + way(s + 2)+way(s+3);
}*/
int  main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	//cin >> t;

	while (t--)
	{
		// dp iterative 
		int n, x;
		cin >> n >> x;
		vector<int>a(n), b(n), dp(x+1);
		for (auto& it : a)cin >> it;
		for (auto& it : b)cin >> it;
		for (int i = 0; i < n; i++)// each price
		{
			for (int j = x; j > 0; j--)// total price 
			{
				if (j >= a[i])dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
			}
		}
		cout << dp[x];
	}
}
