
#include<vector>
#include <iostream>
#include<numeric>
#include<algorithm>
#include<cmath>
#define ll long long
#define ld long double
using namespace std;

vector<bool>sieve2(ll n) {//preproccing

	vector<bool>is_prime(n + 1, true);
	is_prime[0] = false, is_prime[1] = false;

	for (ll i = 2; i <= n; i++) {
		if (is_prime[i]) {
			for (ll j = 2 * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
	return is_prime;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;// cin >> tc; while (tc--) {

		ll n, k; cin >> n ;
		vector<int>v(n);
		vector<int>even;
		vector<int>odd;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			
		}
		for (int i = 0; i < n; i++) {
			
			if (v[i] % 2 == 0)even.push_back(v[i]);
			else odd.push_back(v[i]);
		}
		if (even.size() == odd.size()) { cout << 0; return 0; }

		if (even.size() > odd.size()) {
			sort(even.begin(), even.end());
			int cnt = even.size()-(odd.size() + 1);
			ll sum = 0;
			for (int i = 0; i < cnt; i++) {
				sum += even[i];
			}
			cout << sum;
		}
		else  {
			sort(odd.begin(), odd.end());
			int cnt = odd.size() - (even.size() + 1);
			ll sum = 0;
			for (int i = 0; i < cnt; i++) {
				sum += odd[i];
			}
			cout << sum;
		}
	
}
