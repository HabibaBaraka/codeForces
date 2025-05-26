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
	int tc = 1; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int ans = -1;
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		bool f = 0;
		for (int i = 0; i <= 1024; i++) {
			vector<int>k;
			for (auto it : v) {
				k.push_back(it ^ i);
			}
			sort(k.begin(), k.end());
			if (k == v) {
				ans = i;
				
				break;
			}
		}
		cout << ans<<'\n';
	}
}
