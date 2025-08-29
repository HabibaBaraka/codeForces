 
/*
	The Cow (2:28)

كَيْفَ تَكْفُرُونَ بِٱللَّهِ وَكُنتُمْ أَمْوَٰتًۭا فَأَحْيَـٰكُمْ ۖ ثُمَّ يُمِيتُكُمْ ثُمَّ يُحْيِيكُمْ ثُمَّ إِلَيْهِ تُرْجَعُونَ ٢٨

How can you deny Allah? You were lifeless and He gave you life,
then He will cause you to die and again bring you to life,
and then to Him you will ˹all˺ be returned.
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e5 + 7;
ll a[N];
int sumd(ll x)
{
	int s = 0;
	while (x)
	{
		s += x % 10;
		x /= 10;
	}
	return s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		int mp[n + 5] = {};
		ll dig[n+5][5] = {};
		set<int>s;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			ll x = a[i];
			dig[i][0] = x;
			dig[i][1] = sumd(dig[i][0]);
			dig[i][2] = sumd(dig[i][1]);
			dig[i][3] = sumd(dig[i][2]);
			dig[i][4] = sumd(dig[i][3]);
			//cout << dig[i][0] << ' ' << dig[i][1] << ' ' << dig[i][2]; el
			s.insert(i);
		}
		while (q--)
		{
			int op;
			cin >> op;
			if (op == 2)
			{
				ll x;
				cin >> x;
				cout << dig[x - 1][mp[x - 1]];el
			}
			else
			{
				int l, r;
				cin >> l >> r;
				l--; r--;
				auto it = s.lower_bound(l);
				while (it != s.end() && *it <= r)
				{
					mp[*it]++;
					if (mp[*it] == 4)
					{
						auto itt = it;
						itt++;
						s.erase(it);
						it = itt;
					}
					else it++;
				}
				//cout << mp[2];el
			}
		}


	}
	return 0;
}
