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

bool unWork(char c) {
	return c == 'm' || c == 'n' || c == 'b' || c == 'v' || c == 'c' || c == 'x' || c == 'z';
}

int main()

{
	
	//pre();
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	//SPF();
	while (t--) {
		string s;
		cin >> s;
		
		string ans = "";
		for (char c : s) {
			if (!unWork(c))ans += c;
		}
		cout << ans;
		el;
	}
}
