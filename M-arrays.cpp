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
const int N = 1e5 + 7;

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
		int mod[100000] = {};
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			ll x;
			cin >> x;
			mod[x % m]++;
		}
		if (mod[0])cnt++;
		for (int i = 1; i < m; i++)
		{
			if (mod[i] != -1)
			{
				int mn = min(mod[i], mod[m - i]);
				int mx = max(mod[i], mod[m - i]);
				if (mn == mx&&mn!=0)
				{
					cnt++;
				}
				else
				{
					mx -= (mn + 1);
					cnt += mx + 1;
				}
				mod[i] = mod[m - i] = -1;
			}
		}cout << cnt;el
	}

	return 0;
}
