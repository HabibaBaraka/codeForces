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
const ll mod = 1e9 + 7;
vector<int>a;
int n, s;
ll dp[1000001];
ll com(int  sum)
{
	// base case
	if (sum == s)return 1;
	if (sum > s)return 0;
	ll& ret = dp[sum];
	if (ret != -1)return ret;
	// transition 
	ret = 0;
	for (auto it : a)
	{
		if (sum + it <= s) {
			ret += com(sum + it);
			ret %= mod;
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
		cin >> n >> s;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		cout << com(0);
		el;
	}
}
