//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
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
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 1000000
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		ll n, q, m;
		cin >> n >> q >> m;
		vector<ll>v(n);
		for (auto& it : v)cin >> it;
		vector<string>v2(n);
		for (auto &it : v2)
		{
			cin >> it;
		}
		
		while (q--)
		{
			ll x;
			cin >> x;
			auto idn = lower_bound(v.begin(), v.end(), x);
			if (idn == v.end())cout << v2[n - 1];
			else if (v[idn - v.begin()] > x)
			{
				cout << v2[idn - v.begin() - 1];
			}
			else cout << v2[idn - v.begin()];
			el;
		}

		
	}
	return 0;
}
