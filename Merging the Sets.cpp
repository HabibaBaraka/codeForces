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
const ll  mod = 998244353;
#define graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e5+ 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n, m;
		cin >> n >> m;
		vector<set<int>>v(n);
		set<int>st;
		int mp[N] = {};
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			for (int j = 0; j < x; j++)
			{
				int y;
				cin >> y;
				v[i].insert(y);
				st.insert(y);
				mp[y]++;
			}
		}bool can = st.size()==m;
		
		int cnt = 0;
		for (auto it : v)
		{
			bool f = 1;
			for (auto i : it)
			{
				if (mp[i] == 1)f = 0;
			}
			if (f)cnt++;
		}
		 (can && cnt >= 2)?cout << Y:cout << O;
	} 
	return 0;
}
