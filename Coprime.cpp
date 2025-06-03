/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<set>
#include<algorithm>
#include<map>
#include<numeric>
#define ll long long
#define ld long double
using namespace std;
void pre() {
	for (int i = 1; i <= 4; i++) {
		cout << i << ":";
		ll temp = i;
		for (int j = 0; j <= 10; j++) {

			cout << temp % 5 << ' ';
			temp *= i;

		}
		cout << '\n';

	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int tc = 1; cin >> tc;
	while (tc--) {
		ll n; cin >> n;
		set<int>s;
		map<int, int>mp;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			s.insert(x);
			mp[x] = i + 1;
		}

		vector<int>v;
		for (auto it : s) {
			v.push_back(it);
		}
		int mx = -1;
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v.size(); j++) {
				if (gcd(v[i], v[j]) == 1) {
					mx = max(mx, mp[v[i]]+mp[v[j]]);
				}
			}
		}
		cout << mx<<"\n";
	}
	return 0;
}
