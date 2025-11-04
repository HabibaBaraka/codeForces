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
const int N = 100000+9;
ll ask( int x)
{
	cout <<"? "<< x << ' ';
	for (int i = 1; i <= x; i++)cout << i << ' ';
	cout << endl;
	cout.flush();
	ll sum;
	cin >> sum;
	return sum;
}
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
		vector<ll>v(n);
		for (auto& it : v)cin >> it;
		for (int i = 1; i < n; i++)v[i] += v[i - 1];
		int l = 0, r = n - 1, mid, ans=-1;
		while (l <= r)
		{
			mid = (l + r) / 2;

			if (ask(mid + 1) >v[mid])
			{
				ans = mid + 1;;
				r = mid-1;
			}
			else l = mid+1;
		}
		cout <<"! "<< ans << endl;
		cout.flush();
	}
	return 0;
}
