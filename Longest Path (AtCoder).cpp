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
ll mod = 1e9 + 7;
int n,m;

ll dp[100001];
ll dfs(int i,graph&g)
{
	// base case 
	
	ll& ret = dp[i];
	if (~ret)return ret;
	// transition 
	ret = 0;
	for (auto it : g[i])
	{
		
		{
			ret=max(ret,1+dfs(it, g));
		}
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
		cin >> n >> m;
		graph g(n + 1);
		for (int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			g[x].push_back(y);
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++)
		{
			
			{
				ans = max(ans, dfs(i, g));
			}
		}
		cout << ans;
		el;
	}
}
