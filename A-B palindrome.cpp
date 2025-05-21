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
		int n,a,b;
		cin >> a>>b;
		n = a + b;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++) {
			
			if (s[i] == '1')b--;else if(s[i]=='0')  a--;
		}
		bool f = 1;
		int cnt = 0;
		for (int i = 0; i < n/2; i++) {
			if (((s[i] != '?') && (s[n - i - 1] != '?')) && s[i] != s[n - i - 1]) {
				f = 0;
				break;
			}
			else if (s[i] != s[n - i - 1]) {
				if (s[i] == '?') {
					s[i] = s[n - i - 1];
					if (s[i] == '1')b--; else if (s[i] == '0')  a--;
					if (a < 0 || b < 0) { f = 0; break; }
				}
				else {
					s[n-i-1] = s[i];
					if (s[i] == '1')b--; else if (s[i] == '0')  a--;
					if (a < 0 || b < 0) { f = 0; break; }

				}
			}
			else if(s[i]=='?'&&s[n-i-1]=='?'){

				// ?....?
				cnt += 2;
			}
		}
		if (cnt > 0) {
			for (int i = 0; i < n/2; i++) {
				if (s[i] == '?') {
					if (a >= 2) {
						s[i] = s[n - i - 1] = '0';
						a -= 2;
					}
					else if (b >= 2) {
						s[i] = s[n - i - 1] = '1';
						b -= 2;
					}
					else f = 0;
				}
			}
		}

		if (n & 1) {
			if (s[n / 2] == '?') {
				
				if (a > 0) {
					a--;
					s[n / 2] = '0';
				
				}
				else if (b > 0) {
					b--;
					s[n / 2] = '1';
				
				}
				else {
					f = 0;
				
				}
			}
		}
		if (a < 0 || b < 0)f = 0;
		f ? cout << s : cout << -1;
		el;
	}
}
