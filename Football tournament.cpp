/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<unordered_map>
#include<stack>
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
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
unordered_map<ll, ll>mp;
ll find(ll x)
{
// base case 
	if (mp.find(x) == mp.end())return x;
	// transition 
	return mp[x]=find(x + 1);
}
int  main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	//cin >> t;
  

	while (t--)
	{
		int n;
		cin >> n;
		
		vector<ll>v(n);
		for (auto& it : v) { cin >> it;}
		sort(v.begin(), v.end()); ll ans = 0;
		for (int i = 0; i < n; i++)
		{
			ll nval = find(v[i]);
			mp[(nval)]++;;
			ans += nval - v[i];
		}
		cout << ans;
	}
} 
