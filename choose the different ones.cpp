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
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005



int main()

{
	
	//pre();
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	//SPF();
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		
		set<int>s, s2;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x <= k)s.insert(x);
		}
		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			if (x <= k)s2.insert(x);
		}
		if (s.size() < k / 2 || s2.size() < k / 2)cout << O;
		else {
			for (auto it : s) {
				s2.insert(it);
			}
			s2.size() == k ? cout << Y : cout << O;
		}
		el;
	}
}
