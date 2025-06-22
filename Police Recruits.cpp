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

	
	
	ll n; cin >> n;
	int ans = 0, out = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == -1) {
			if (ans == 0) {
				out++;
			}
			else ans--;
		}
		else {
			ans += v[i];
		}
	}
	cout << out;
	return 0;
}
