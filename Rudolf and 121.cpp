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
const int N = 1e6 + 4;
const ll mod = 1e9 + 7;
int n;

/*
int calc(int i = 0)
{
	// base case
	if (i == n)return 1;
	if (i > n)return 0;
	int& ret = dp[i];
	if (~ret)return ret;
	// transition
	return ret = calc(i + 2021) + calc(i + 2020);
}

*/
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>v(n);
		for (auto& it : v)cin >> it;
		for (int i = 1; i < n - 1; i++)
		{
				int op = min({ v[i - 1], v[i] / 2, v[i + 1] });
				v[i - 1] -= op;
				v[i] -= (2 * op);
				v[i + 1] -= op;
				//cout << op; el;
			
		}
		sort(v.begin(), v.end());
		v[n - 1] == 0 ? cout << Y : cout << O;
	}
}
