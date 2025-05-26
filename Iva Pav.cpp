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
int N = 200005;
int preBits[200005][32];
int val(int L, int r) {
	bitset<32>ans;
		for (int i = 0; i < 32; i++) {
			int cnt = preBits[r][i];
			if (L - 1 >= 0) {
				cnt -= preBits[L - 1][i];
			}
			if (cnt == r - L + 1) {
				ans[i] = 1;


			}
		}
		return ans.to_ullong();
}



int can(int L,int k,int n) {
	ll l = L, r = n-1, mid, ans = -1;
	while (l <= r) {
		mid = (l + r) / 2;

		int ansAd = val(L, mid);
		if (ansAd >= k) {
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;

	}
	return ans;
}
int main()
{
	int tc = 1; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		vector<ll>v(n);
		for (int i = 0; i <n; i++) {
			cin >> v[i];
		}
		
		for (int i = 0; i < n; i++) {
			ll x = v[i];
			bitset<32>b=x;
			for (int j = 0; j < 32; j++) {
				
					preBits[i][j] =b[j];
				
			}
		}
		
			for (int j = 0; j < 32; j++) {

				for (int i = 1; i < n; i++) {
					preBits[i][j] += preBits[i-1][j];

				}
			}
			



		ll q;
		cin >> q;
		while (q--) {
			ll L, k;
			cin >> L >> k;
			L--;
			ll ansAd = can(L, k, n);
			if (ansAd == -1) {
				cout << -1<<" ";
			}
			else cout << ansAd + 1<<" ";


		}
			
			
		
		cout << '\n';
	}
	return 0;
}
