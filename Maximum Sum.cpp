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
const int N = 200000 + 4;
const ll mod = 1e9 + 7;
ll a[N];
ll dp[N];
int n,k;
ll sub(int i)
{
	// base case 
	if (i == n)return 0;
	ll& ret = dp[i];
	if (~ret)return ret;
	//transition
	return ret = max(a[i],sub(i + 1) + a[i]);
}

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	
	while (t--)
	{
	
		cin >> n>>k;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i]; sum += a[i]; dp[i] = -1;
		}
		ll mxsub = 0;
		for (int i = 0; i < n; i++)
		{
			mxsub = max(mxsub, sub(i));
		}
		//cout << mxsub;el
		while (k--)
		{
			sum += mxsub;
			sum = (sum + mod) % mod;
			mxsub += mxsub;
			mxsub %= mod;
		}
		cout << sum; el;
	}
}
