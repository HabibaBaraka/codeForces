/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<set>
#include<algorithm>
#include<map>
#include<numeric>
#define ll long long
#define ld long double
using namespace std;
const ll N = 1e7;

vector<int>f(N + 10);
vector<int>mp(N + 10);
vector<bool>is_prime(N + 10, true);
void sieve() {//preroccing


	is_prime[0] = false, is_prime[1] = false;
	for (int i = 2; i <= N; i++) {
		if (is_prime[i]) {
			f[i] += mp[i];
			for (int j = 2 * i; j <= N; j += i) {

				f[i] += mp[j];
				is_prime[j] = 0;
			}
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;// cin >> tc;
	while (tc--) {
		ll n; cin >> n;


		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
		}
		sieve();

		for (int i = 1; i < f.size(); i++) {
			f[i] += f[i - 1];
		}






		int q;
		cin >> q;
		while (q--)
		{
			ll l, r;
			cin >> l >> r;
			if (r > 1e7) {
				r = 1e7;
			}
			if (l > 1e7) {
				cout << 0 << '\n'; continue;
			}
			ll ans = f[r] - f[l - 1];
			cout << ans << "\n";
		}

	}
	return 0;
}
