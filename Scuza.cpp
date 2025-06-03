#include<vector>
#include <iostream>
using namespace std;
#include<unordered_map>
#include<algorithm>
#include<cmath>
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#include <set>
bool pr(ll n) {
	if (n == 2)return 1;
	if (n % 2 == 0)return 0;
	for (ll i = 3; i * i <= n; i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}

vector<ll>divisors(ll n) {
	vector <ll>div;
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			div.push_back(i);
			if (i * i != n)
				div.push_back((n / i));
		}
	}
	return div;
}/*
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}
*/
bool lucky(int n) {
	int x = n;
	while (x > 0) {
		int d = x % 10;
		if (d != 7 && d != 4)return 0;
		x /= 10;
	}
	return 1;
}
int valid(int x, vector<ll>& v) {
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > x)return sum;
		sum += v[i];
	}
	return sum;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n>>k;
		vector<ll>pr(n), v(n),mxpr(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		
		pr[0] =mxpr[0]= v[0];
		for (int i = 1; i < n; i++) {
			pr[i] = pr[i - 1] + v[i];
			mxpr[i] = max(mxpr[i - 1], v[i]);
		}
		while (k--) {
			ll x;
			cin >> x;
			int idx=upper_bound(mxpr.begin(), mxpr.end(), x)-mxpr.begin();
			if (idx <= 0)cout << 0<<" ";
			else cout << pr[idx-1]<<" ";
			
			
		}
		el;
	}
}
