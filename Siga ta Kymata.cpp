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
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e3 + 9;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		vector<int>v(n);
		for (auto& it : v)cin >> it;
		string x;
		cin >> x;
		int idxMn = -1;
		int idxMx = -1;
		for (int i = 0; i < n; i++)
		{
			if (v[i] == 1)idxMn = i;
			if (v[i] == n)idxMx = i;
		}
		set<pair<int, int>>vp;
		int cnt = 0;
		bool f = 1;
		vp.insert({ 0,n - 1 });
		vp.insert({ 0,idxMn });
		vp.insert({ 0,idxMx });
		vp.insert({ idxMx,n - 1 });
		vp.insert({ idxMn,n - 1 });
		for (int i = 0; i < n; i++)
		{
			if (x[i] == '1')
			{
				bool cover = 0;
				for (auto it : vp)
				{
					if (i > it.first && i<it.second && v[i]>min(v[it.first], v[it.second]) && v[i] < max(v[it.first], v[it.second]))
					{
						cover = 1;
						break;
					}
				}
				if (!cover)
				{
					f = 0;
					break;
				}
			}
		}
		if (!f)cout << -1;
		else
		{
			cout << vp.size();
			el;
			for (auto it : vp)
			{
				cout << min(it.first+1,it.second+1) << " " << max(it.second+1,it.first+1);
				el
			}
		}
	
		el
	}
	return 0;
}
