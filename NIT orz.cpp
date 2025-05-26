/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
// BIT MASKS
#include<vector>
#include <iostream>
#include<set>
#include<algorithm>
//#include<bit>
#define ll long long
#define ld long double
using namespace std;
int main() {
	int t = 1; cin >> t;
	while (t--) {
		int n,z; cin >> n>>z;
		vector<ll>v(n);
		ll mx = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int a = 0;
	
		for (int i = 0; i < n; i++) {
			if (mx < (z | v[i])) {
				a = i;
			}
			mx = max(z | v[i], mx);
		}
		 z = v[a] & z, v[a] = (mx);
		 cout << mx<<" "<<z;
		cout << '\n';
	}
}
