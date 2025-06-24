/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
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
ll dp[1020][1020];
int n, m;
char a[1020][1020];
bool vis[1020][1020];
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '*';
}
ll path(int i,int j)
{
	// base case 
	if (!valid(i,j))return 0;
	if (i == n-1 && j == m-1)return 1;
	ll& ret = dp[i][j];
	if (~ret)return ret;
	// transition 

	return ret = (path(i, j + 1) % mod + path(i + 1, j) % mod)%mod;
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
		m = n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		cout<<path(0, 0);
		el;
	}
}
