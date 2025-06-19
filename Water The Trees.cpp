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
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
//const char dir[] = { 'R','L','U','D' };
#define gr vector<vector<int>>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 32768;
bool can(ll d, vector<ll>& v,ll t)
{
	// 4 // 5
	ll dayE = d / 2, dayO=d-dayE;
	 int n = v.size();
	
	
	for (int i = 0; i < n; i++)
	{
	
		ll rec = t - v[i];
		ll e = min(rec / 2,dayE);
		rec -= e * 2;;
		dayE -= e;
		if (rec > dayO)return 0;
		else
		{
			dayO -= rec;
			
		}
		
		
	}
	return 1;
}
int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>a(n);
		ll sum = 0;
		for (auto& it : a) {
			cin >> it, sum += it;
		}
		sort(a.begin(), a.end());
		

		ll l = 0, r = 1e18, mid, ans = -1;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (can(mid, a,a[n-1]) || can(mid, a, a[n-1]+1))
			{
				r = mid - 1;
				ans = mid;
			}
			else l = mid + 1;

		}
		cout << ans;
		el;
	}
}
