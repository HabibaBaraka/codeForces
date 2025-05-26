/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<map>
#include<algorithm>
#include<set>
#define ll long long
#define ld long double
using namespace std;
#include<bitset>
#include <iostream>
using namespace std;
bool can(int k, vector<int>& v) {
	int n = v.size(), cnt = 1;
	int freqBit[31] = { 0 };
	int Or = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < 31; j++) {
			if ((v[i] >> j) & 1) {
				freqBit[j]++;
			}
		}
		Or |= v[i];
	}
	for (int i = k; i < v.size(); i++) {
		int or2 = 0;
		for (int j = 0; j < 31; j++) {
			if ((v[i-k] >> j) & 1) {
				freqBit[j]--;
			}
		}
		for (int j = 0; j < 31; j++) {
			if ((v[i] >> j) & 1) {
				freqBit[j]++;
			}
		}
		for (int j = 0; j < 31; j++) {
			if (freqBit[j]) {
				or2 |= (1 << j);
			}
		}
		if (or2 == Or)cnt++;
	}
	return cnt==n-k+1;
}
int main()
{
	int tc = 1; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		vector<int>v(n), xr(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		bool f = 1;
		int fr = v[0];
		for (int i = 0; i < n; i++) {
			if (v[i] != fr) { f = 0; break; }
		}
		if (n == 1)cout << 1;
		else if (f) {
			cout << 1;
		}
		else {
			// binary search on answer
			int l = 1, r = n, mid, ans = 0;
			while (l <= r) {
				mid = (l + r) / 2;
				if (can(mid,v)) {
					r = mid - 1;
					ans = mid;
				}
				else l = mid + 1;
			}
			cout << ans;
		}
		cout << '\n';
	}
	return 0;
}
