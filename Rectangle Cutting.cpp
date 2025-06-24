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
 ll dp[505][505];
int n, m;

ll cut(int a, int b)
{
	// base case 
	if (a == b)return 0;
	ll& ret = dp[a][b];
	ll& ret2 = dp[b][a];
	if (~ret||~ret2)return ret;
	// transition 
	ret = INT_MAX;

	ll x=0, y=0;
	for (int i = 1; i < a; i++)
	{
		x=1+cut(i, b)+cut(a - i, b);
		ret = min(ret, x);
	}
	
	for (int i = 1; i < b; i++)
	{
		y=1+cut(i, a)+ cut(b - i, a);
		ret = min(ret, y);
	}
	ret2 = ret;
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
	
		cout << cut(n, m);

		el;
	}
}
