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
ll dp[505][100003];
 int a[200];
int n, m;
set<int>s;
void calc(int i,int sum)
{
	// base case 
	if (sum > 0)s.insert(sum);
	if (dp[i][sum] != -1||i>=n)return;
	dp[i][sum] = 1;
	
	// transition 
	calc(i + 1, sum + a[i]);
	calc(i + 1, sum);
	 
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
		for (int i = 0; i < n; i++)cin >> a[i];
		calc(0, 0);
		cout << s.size(); el;
		for (auto it : s)
		{
			cout << it << " ";
		}
		el;
	}
}
