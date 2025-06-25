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
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;
int n;

ll dp[101][4];
int a[101];
ll vacation(int i,int st=0)
{
	// base case 
	if (i >= n)return 0;
	ll& ret = dp[i][st];
	if (~ret)return ret;
	// transition 
	ret = INT_MAX;
	if (a[i] == 0)
	{
		
		{
			ret = min(ret, vacation(i + 1, 1) + 1);
		}
	}
	else if (a[i] == 1)
	{
	
		{
			ret = min(ret, vacation(i + 1, 1) + 1);
		}
		if (st != 2)
		{
			ret = min(ret, vacation(i + 1, 2));
		}
	}
	else if (a[i] == 2)
	{
		
		{
			ret = min(ret, vacation(i + 1, 1) + 1);
		}
		if (st != 3)
		{
			ret = min(ret, vacation(i + 1, 3));
		}
	}
	else if (a[i] == 3)
	{
	
		{
			ret = min(ret, vacation(i + 1, 1) + 1);
		}
		if (st != 2)
		{
			ret = min(ret, vacation(i + 1, 2));
		}
		if (st != 3)
		{
			ret = min(ret, vacation(i + 1, 3));
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
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << vacation(0);
		el;
	}
}
