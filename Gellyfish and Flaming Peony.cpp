//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<map>
#include<numeric>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 6005
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
int n;
ll dp[N][N];
ll a[N];
int tr;
ll calc(int i, int g)
{
	// base case 
	if (g == tr)return 0;
	if (i == n)return INT_MAX;
	ll& ret = dp[i][g];
	if (~ret)return ret;
	// transition 

return ret=min(calc(i + 1, gcd(g, a[i])) + 1, calc(i + 1, g));

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
	
		cin >> n;
		int g = 0;
		ll mx=0;
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
			g = gcd(g, a[i]);
		
		}
			for (int i = 0; i < n; i++) {
			  for(int j=0;j<=N;j++)dp[i][j]=-1;
			  
			  }
		tr = g;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == tr)cnt++;
		}
		if (cnt)cout << n - cnt;
		else
		{
			int mn = INT_MAX; 
			mn = calc(0, 0);
			mn--;
			cout << mn + n - 1;
		}
		
		el;
	}
	return 0;
}
