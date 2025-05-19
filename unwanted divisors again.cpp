/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<numeric>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
ll mod = 1e9 + 7;

void divisors(ll n,vector<int>&div) {
	
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			div.push_back(i);
			if (i * i != n)
				div.push_back((n / i));
		}
	}
	
}

const int MAX = 10000001;
int spf[MAX];

int main()

{
	
	
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	//SPF();
	while (t--) {
		int n;
		cin >> n;
		ll m;
		cin >> m;
		vector<ll>a(n);
		vector<int>v;
		set<int>s;
		divisors(m, v);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(gcd(a[i], m));
		}
		int cnt = v.size();
		for (auto it : v) {
			for (auto i : s) {
				if (i % it == 0) {
					cnt--; break;
				}
			}
		}
		cout << cnt;
		
		el;
	}
}
