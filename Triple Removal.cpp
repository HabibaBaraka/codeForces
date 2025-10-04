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
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 2e9 + 7;

#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n, q;
		cin >> n >> q;
		vector<int>v(n), p0(n), p1(n),same(n);
		set<int>s0, s1;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			if (v[i])s1.insert(i);
			else s0.insert(i);
		}
		
		if (v[0])p1[0] = 1;
		else p0[0] = 1;
		for (int i = 1; i < n; i++)
		{
			p0[i] += p0[i - 1];
			p1[i] += p1[i - 1];
			if (v[i])p1[i]++;
			else p0[i]++;
		}
		same[0] = 0;
		for (int i = 1; i < n; i++)
		{
			same[i] += same[i - 1] + (v[i] == v[i - 1]);
		}
		while (q--)
		{
			int l, r;
			cin >> l >> r;
			l--; r--;
			int z = p0[r] - (l > 0 ? p0[l - 1] : 0);
			int one = p1[r] - (l > 0 ? p1[l - 1] : 0);
			if (z % 3 != 0 || one % 3 != 0)cout << -1;
			else
			{
				cout << (r - l + 1)/3 + (same[r] -same[l] == 0);
			}
		  el;
		}
	}
	return 0;
}
