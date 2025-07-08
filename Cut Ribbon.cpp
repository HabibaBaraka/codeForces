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
#define G vector<vector<int>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 5000 + 4;
const ll mod = 1e9 + 7;
ll dp[N]; int n,a, b, c;
ll ribbon(int i = 0)
{
	// base case
	if (i > n)return INT_MIN;
	if (i == n)return 0;
	ll& ret = dp[i];
	if (~ret)return ret;
	// transition 
	
	return ret=max({ ribbon(i + a) + 1, ribbon(i + b) + 1, ribbon(i + c) + 1 });
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
		cin >> n>>a>>b>>c;
		cout << ribbon();
	}
}
