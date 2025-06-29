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
		int n,x;
		cin >> n>>x;
		int dp[1000004] = {};
	fill(dp, dp + x + 1, INT_MAX-1); // تصليح هنا

		dp[0] = 0;
		int a[1000004] = {};
		for (int i = 0; i < n; i++)cin >> a[i];

		for (int i = 1; i <= x; i++)
		{
			for (int j = 0; j <n; j++)
			{
				if (i - a[j] >= 0)dp[i]=min(dp[i], dp[i-a[j]]+1);
				
			}
		}
	(dp[x]==INT_MAX-1)?cout<<-1:	cout << dp[x];
		el;
	}
}
