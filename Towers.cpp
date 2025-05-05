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
	//cin >> t;
	while (t--) {

		int n;
		cin >> n;
		vector<ll>v(n);
		
		int idx = -1;
		for (int i = 0; i < n; i++)cin >> v[i];
		multiset<ll>s;
		int ans = 1;
		s.insert(v[0]);
		for (int i = 1; i < n; i++) {
			auto it = s.upper_bound(v[i]);
			if (it == s.end())ans++;
			else {
				s.erase(it);
			}
			s.insert(v[i]);

		}
		cout << ans;
		el;
	}
}
