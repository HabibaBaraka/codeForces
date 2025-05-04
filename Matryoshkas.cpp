#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<iomanip>
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
		vector<ll>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		map<ll, int>mp;
		ll ans = 0;
		for (auto it:v) {
			if (!mp[it - 1]) {
				ans++;
			}
			else mp[it - 1]--;
			mp[it]++;
		}
		cout << ans;
		el;
	}
}
