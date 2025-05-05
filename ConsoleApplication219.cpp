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

		ll n,h;
		cin >> n>>h;
		vector<ll>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		sort(v.begin(), v.end());
		int a[3]= { 2, 2, 3 };
		int mx = 0;
		do {
			int j = 0;
			ll hh = h;
			int cnt = 0;
			for (int i = 0; i < n; i++) {

				while (j < 3 && hh <= v[i]) {
					hh *= a[j];
					j++;
					
				}
				if (hh > v[i]) {
					hh += v[i] / 2;
					cnt++;
				}
					
				
			}
			mx = max(mx, cnt);
		} while (next_permutation(a,a+3));
		cout << mx;
		
		el;
	}
}