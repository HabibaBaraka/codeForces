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
#include<set>
#include<bitset>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
ll mod = 1e9 + 7;
const int MAX = 10000001;
int spf[MAX];

void SPF() {
	for (int i = 0; i < MAX; i++)
		spf[i] = i;

	for (int i = 2; i * i < MAX; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAX; j += i) {
				if (spf[j] == j)
					spf[j] = i;
			}
		}
	}

}
vector<int> getPrimeFactors(int x) {
	vector<int> factors;
	while (x != 1) {
		factors.push_back(spf[x]);
		x /= spf[x];
	}
	return factors;
}

int main()

{
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	SPF();
	while (t--) {

		int n, m;
		cin >> n >> m;
		map<int, ll>x, y;
		vector<int>v(n), v2(m), p1(n), p2(m);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			
			cin >> p1[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> v2[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> p2[i];
		}

		//
		for (int i = 0; i < n; i++) {
			int k;
			k = v[i];
			vector<int>pr;
			pr = getPrimeFactors(k);
			for (auto it : pr) {
				
				x[it] += p1[i];
			}

		}
		//

		for (int i = 0; i < m; i++) {
			int k;
			k = v2[i];
			vector<int>pr;
			pr = getPrimeFactors(k);
			for (auto it : pr) {
				
				y[it] += p2[i];
			}

		}

		bool f = 1;
		for (auto it : y) {
			if (x[it.first] < it.second){
				f = 0;
				break;
			}
		}
		f ? cout << Y : cout << O; el;
	}
}