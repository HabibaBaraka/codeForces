#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<numeric>
#include<string>
#include<queue>
#include<set>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;


int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll k;
		cin >> k;
		vector<ll>v(n);
		ll sum = 0;;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			sum += v[i];
		}
		sort(v.begin(), v.end());
		if (v[n-1]-v[0] <= k) {
			if (sum & 1) {
				cout << "Tom";
			}
			else cout << "Jerry";
		}
		else {
			v[n - 1]--;
			if (*max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) <= k) {
				if (sum & 1) {
					cout << "Tom";
				}
				else cout << "Jerry";
			}
			else cout << "Jerry";
		}
		el;
	}
}
