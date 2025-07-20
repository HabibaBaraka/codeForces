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

const int N = 2e6 + 55;;
const int M = 1e9 + 7;


int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	ll t = 1;
	cin >> t;
	
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>v(n);
		for (auto& it : v)cin >> it;
		sort(v.begin(), v.end());
		ll x= 0;
		for (int i = 0; i < n - 1; i++)
		{
			x = max(x, v[i] & v[i + 1]);
		}
		ll cnt = 0;
		for (auto it : v)
		{
			bool f = 1;
			for (int j = 0; j < 65; j++)
			{
				if (((x >> j) & 1ll))
				{
					if (!((it >> j) & 1ll))f = 0;
				}
			}
			f ? cnt++:cnt+=0;
		}
		cout << x << " " <<cnt*(cnt-1)/2;
		el;
	}
}
/*
الحمدلله رب العالمين
*/
