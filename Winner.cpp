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
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e7 + 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		map<string, int>mp;
		vector<pair<string, int>>v(n);
		int mx = 0;
		string win = "";
		for (auto& it : v)
		{
			cin >> it.first >> it.second;
			mp[it.first] += it.second;
		}
		for (int i = 0; i < n; i++)
		{
			mx = max(mp[v[i].first], mx);
		}
		
		set<string>st;
		for (auto it : mp)
		{
			if (it.second == mx)st.insert(it.first);
		}mp.clear();
		for (int i = 0; i < n; i++)
		{
			if (st.count(v[i].first))
			{
				mp[v[i].first] += v[i].second;
				if (mp[v[i].first] >= mx)
				{
					win = v[i].first;
					break;
				}
			}
		}
		cout << win;el
	}

	return 0;
}
