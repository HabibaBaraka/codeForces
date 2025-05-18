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
int main()

{
	generate();
	
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	
	while (t--) {
		ll l, r;
		cin >> l >> r;
		//lower on r - lower on l
		int cnt = distance(v.begin(),v.upper_bound(r));// less than or equal to r 
		int cnt2= distance(v.begin(), v.lower_bound(l));// less than l
		cout << cnt - cnt2;
		el;
	}
}
