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
const int dx[] = { 0,0,1,-1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<pair<int,ll>>>
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const int N = 2000 + 4;
const ll mod = 1e9 + 7;
int n;
ll v[N];
bool can(ll k)
{
	ll allow = 0;
	for (int i = 0; i<n; i++)
	{
		if (i<n-1&&(v[i + 1] - v[i]) <= k)i++;
		else allow++;
	}
	return allow<2;
}

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	ll t = 1;
	cin >> t;

	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)cin >> v[i];
		sort(v, v + n);
		ll l = 1, r = 1e18, mid, ans = 0;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (can(mid))
			{
				ans = mid;
				r = mid - 1;
			}
			else l = mid+1;
		}
		cout << ans; el;
	}
}
/*
الحمدلله رب العالمين
*/
