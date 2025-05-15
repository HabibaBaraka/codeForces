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
/*
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
*/
int main()

{
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;
	//SPF();
	while (t--) {
		ll r, g, b;
		cin >> r >> g >> b;
		ll v[3];
		v[0] = r; v[1] = g; v[2] = b;
		sort(v, v + 3);
		ll ans = min(v[0] + v[1], (r + b + g) / 3);
		/*
		 we have three cases 
		 r~=b~=g diff not exeed 1
		 r>b>g
		 we take 2 from max and one from nexr it until it be  nearly equal (case one)
		 or until g =0 , b=0 so, answer will be equal g+b
		
		*/
			cout << ans; el;
	}
}
