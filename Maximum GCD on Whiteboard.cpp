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
#define Y "Y\n"
#define O "N\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 200000+9;
vector<int>d[N+1];
void pre()
{
	for (int i = 2; i <= N; i++)
	{
		for (int j = i; j <= N; j += i)
		{
			d[j].push_back(i);
		}
	}
}
int k;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	pre();
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n >> k;
		vector<int>v(n),p(n+1);
		vector<int>mul[n + 1];

		for (auto& it : v) { 
			cin >> it;
			p[it]++;
			for (auto i : d[it])
			{
				mul[i].push_back(it);
			}
		}
		for (auto &it : mul)sort(it.begin(), it.end());
		
		for (int i = 1; i <= n; i++)p[i] += p[i - 1];
		int ans = 1;
		for (int i = n; i > 1; i--)
		{
			
			int mult = upper_bound(mul[i].begin(), mul[i].end(), 4 * i) - mul[i].begin();
			int erase = p[min(n, 4 * i)] - mult;
			if (erase <= k)
			{
				ans = i;
				break;
			}
		}
		cout << ans;el

	}
	return 0;
}
