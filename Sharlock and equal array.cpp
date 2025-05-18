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
set<ll>v;
void generate() {
	
	for (int i = 1; i <= 63; i++) {
		for (int k = 1; k <= i; k++) {
			ll num = ((1ll << k) - 1ll) << (i - k);
			v.insert(num);
		}
	}
	
}
bool KnowBit(ll n, int i) {
	return (n >> i) & 1;
}
int main()

{
	generate();
	
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		set<int>s,s2;
		for (int i = 0; i < n; i++) {
			int x = a[i];
			int y = b[i];
			for (int j = 0; j < 32; j++) {
				if (KnowBit(y, j) > KnowBit(x, j)) {
					s.insert(j);
				}
				if (KnowBit(y, j) < KnowBit(x, j)) {
					s2.insert(j);
				}
			}

		}
		cout << (s.size()+ s2.size());
		el;
	}
}
