/*
				  "صلي على النبي"
		* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
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


int cntD(int n) {
	int cnt = 0;
	while (n > 0) {
		n /= 10;
		cnt++;
	}
	return cnt;
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
		
		int n;
		cin >> n;
		vector<ll>v(n);
	
		int idx = -1;ll mx = 0;

		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] > mx) {
				idx = i + 1;
				mx = v[i];
			}
		}
		for (int i = 0; i < n-1; i++) {
			if (v[i] == mx && v[i + 1] != mx) {
				idx = i + 1;
				break;
			}
		}
		if (mx == *min_element(v.begin(), v.end()))idx = -1;
		cout << idx;
		el;
	}
}
