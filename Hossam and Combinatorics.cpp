/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		set<int>s; map<int, int>mp;
		for (int i = 0; i < n; i++) { int it; cin >> it; s.insert(it); mp[it]++; }
		int mx = abs(*s.rbegin() - *s.begin());
		if (mx == 0) { cout << n * 1ll * (n - 1);el; continue; }
		ll cnt = 0;
		for (auto it : s)
		{
			auto i = s.lower_bound(mx + it);
			if (i != s.end() && abs(*i - it) == mx)
			{
				cnt += ((mp[it] *1ll* mp[*i]) * 2);

			}

		}
		cout << cnt;
		el;
	}
}
