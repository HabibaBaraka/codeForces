/*
								  "??? ??? ?????"
			  * ??????? ??????????? ??? ?????? ????? ?????? ??? ???????????? ? ??????? ????? ?????????? ?????????? *
*/
#include<vector>
#include <iostream>
#include<cmath>
#include<algorithm>
#include<map>
#define ll long long
#define ld long double
using namespace std;
ll mod = 998244353;
ll multi(ll a, ll b) {
	return (a  * b) % mod;
}
ll add(ll a, ll b) {
	a = (a % mod + b % mod) % mod;
	
	return a ;
}
ll modinv(ll base) {
	ll res = 1;
	ll p = mod - 2;
	while (p > 0) {
		if (p % 2 == 0) {
			p /= 2;
			base = multi(base, base);
		}
		else {
			p--;
			res = multi(res, base);
		}
	}
	return res;
}

int main() {

	int tc = 1;
	//cin >> tc;

	while (tc--) {
		int n;
		cin >> n;
		vector<int>v[100];
		map<int, int>mp;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v[i].push_back(x);
			while (x--) {
				int y;
				cin >> y;
				v[i].push_back(y);
				mp[y]++;
			}
		}

		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll kx = v[i][0];
			for (int j = 1; j < v[i].size(); j++) {
				// 1/n 1/kx cntx/n
				sum = add(sum, multi((multi(modinv(n), modinv(kx))), (multi(mp[v[i][j]], modinv(n)))));
			}

		}
		cout << sum;

		cout << '\n';
	}


}
