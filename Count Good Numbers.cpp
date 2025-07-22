//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
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
#define N 101
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
ll cnt(ll x)
{
	ll ans = x / 2 + x / 3 + x / 5 + x / 7;
	ans -= (x / 6 + x / 10 + x / 14 + x / 15 + x / 35 + x / 21);
	ans += (x / (2 * 3 * 5) + x / (2 * 3 * 7) + x / (3 * 5 * 7) + x / (2 * 5 * 7));
	ans -= (x / (2 * 3 * 5 * 7));
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		ll l, r;
		cin >> l >> r;
		cout << (r - l + 1) - (cnt(r) - cnt(l - 1));
		el;
	}
	return 0;
}
