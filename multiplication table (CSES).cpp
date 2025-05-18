/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
ll mod = 1e9 + 7;
ll n, m, x;
bool can(ll val) {
	ll cntLess = 0;
	for (int i = 1; i <= n; i++) {
		cntLess += min((val-1) / i, m);
	}
	return cntLess <= (n * m / 2);
}
int main()

{
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;
	//SPF();
	while (t--) {
		
		cin >> n;
		m = n;
		// the middle element
		//binary search on answer 
		ll l = 1, r = n * m, mid, ans = -1;
		while (l <= r) {
			mid = (l + r) / 2;
			if (can(mid)) {
				l = mid + 1;
				ans = mid;
			}
			else r = mid - 1;
		}
		cout << ans; el;
	}
}
