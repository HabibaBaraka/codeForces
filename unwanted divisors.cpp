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
const int N = 1e5;
vector<int>divs[N+1];
void pre() {
	for (int i = 1; i <= N; i++) {

		for (int j = i; j <= N; j += i) {
			divs[j].push_back(i);
		}
	}
}


int main()

{
	
	pre();
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	//SPF();
	while (t--) {
		int n;
		cin >> n;
		int q;
		cin >> q;
		multiset<int>s;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			s.insert(x);
		}
		while (q--) {
			int d;
			cin >> d;
			vector<int>ds = divs[d];
			int cnt = 0;
			for (auto it : ds) {
				if (!s.count(it))cnt++;
			}
			cout << cnt; el;
		}
	}
}
