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
#define Y "Yes"
#define O "No"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
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
		int n,q;
		cin >> n;
		ll v[N] = {};
		for (int i = 0; i < n;i++)cin >> v[i];
		
		cin >> q;
		while (q--)
		{
			int op;
			cin >> op;
			if (op == 1)
			{
				int l, r;
				cin >> l >> r;
				l--, r--; ll ans = 0;
				for (int i = l; i <= r; i++)
				{
					ans += v[i];
				}
				cout << ans; el;
			}
			else
			{
				ll l, r, x;
				cin >> l >> r >> x;
				l--, r--;
				ll ans = 0;
				for (int i = l; i <= r; i++)
				{
					v[i] ^= x;
				//	cout << v[i]; el;
				}
				
				
			}

		}

	}

	return 0;
}
