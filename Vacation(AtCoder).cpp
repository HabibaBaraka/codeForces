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

ll dp[100010][3];
int a[100010];
int b[100010];
int c[100010];
ll vacation(int i,int st=0)
{
	// base case 
	if (i >= n)return 0;
	ll& ret = dp[i][st];
	if (~ret)return ret;
	// transition 
	if(st!=1)ret = max( vacation(i + 1,1) + a[i],ret );
	if(st!=2)ret = max(ret, vacation(i + 1,2) + b[i]);
	if(st!=3)ret = max(ret, vacation(i + 1,3) + c[i]);

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
			cin >> a[i] >> b[i] >> c[i];
		}
		cout<<vacation(0);
		el;
	}
}
