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
ll dp[3004][3003];
string a, b;
ll n, capac;
ll LCS(ll i, ll j)
{

	// base case
	if (i == a.size() || j == b.size())return 0;
	ll& ret = dp[i][j];
	if (ret != -1)return ret;
	if (a[i] == b[j])return ret = LCS(i + 1, j + 1) + 1;
	// transition 
	return ret = max(LCS(i + 1, j), LCS(i, j + 1));

}
// building output DP
void print(int i = 0, int j = 0)
{
	// base case
	if (i == a.size() || j == b.size())return;
	ll& ret = dp[i][j];
	if (a[i] == b[j])
	{
		cout << a[i]; print(i + 1, j + 1); return;
	}
	// transition
	if (ret == LCS(i, j + 1)) { print(i, j + 1); }
	else if (ret == LCS(i + 1, j)) { print(i + 1, j); }

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
		cin >> a >> b;
		 LCS(0, 0);
		 print();
		el;
	}
}
