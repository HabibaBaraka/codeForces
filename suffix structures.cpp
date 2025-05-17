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
bool order(string s, string t) {
	queue<char>q;
	for (char c : t) {
		q.push(c);
	}
	for (char c : s) {
		if (!q.empty() && c == q.front()) {
			q.pop();
		}
	}
	return q.empty();
}
int main()

{
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;
	//SPF();
	while (t--) {
		string s, t;
		cin >> s >> t;
		vector<string>ans = { "both","array","need tree","automaton" };
		map<char, int>mps,mpt;
		bool f = 1;
		for (char c : s) {
			mps[c]++;
		}
		for (char c : t) {
			
			mpt[c]++;
		}
		for (char c : t) {
			if (mps[c]<mpt[c])f = 0;
			
		}
	//	cout << mps['x'] << " " << mps['y'] << " " << mpt['x'] << " " << mpt['y'] << " "; el;
		if (!f||t.size()>s.size())cout << ans[2];//need tree
		else {
			if (order(s, t)) {
				cout << ans[3];
			}
		
			else {
			   if (s.size() == t.size())cout << ans[1];
				else cout << ans[0];
			}

		}

		el;
	}
}
