/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
// BIT MASKS
#include<vector>
#include <iostream>
#include<map>
#include<algorithm>
#include<cmath>
#define ll long long
#define ld long double
using namespace std;
int main() {
	int t = 1; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		vector<int>v(n);
		
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (k == n) {

			for (int i = 0; i < n; i++) {
				 v[i]=(v[i]|(1<<30));
			}
			ll ans = v[0];
			for (int i = 1; i < n; i++) {
				ans&=v[i];
			}
			cout << ans;

		}
		else if (k == 0) {
			ll ans = v[0];
			for (int i = 1; i < n; i++) {
				ans &= v[i];
			}
			cout << ans;

		}
		else {
			for (int i = 30; i >=0; i--) {
				int cnt = 0;
				for (int j = 0; j < n; j++) {
					if (!((v[j] >> i) & 1)) {
						cnt++;
					}
				}
				if (cnt <= k) {
					for (int j = 0; j < n; j++) {
						if (!((v[j] >> i) & 1)) {
							v[j] = v[j] | (1 << i);
						}
					}
					k -= cnt;
				}
			}
			ll ans = v[0];
			for (int i = 1; i < n; i++) {
				ans &= v[i];
			}
			cout << ans;

		}
		cout << '\n';
	}
}
