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
#define oo LLONG_MAX
unsigned ll sum(ll n)
{
	return n * (n + 1) / 2;
}
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
		vector<ll>a(n), b(n);
		for (auto& it : a)cin >> it;
		for (auto& it : b)cin >> it;
		a[n - 1] = max(a[n-1], b[n - 1]);
		for (int i = n - 2;i >= 0;i--)
		{
			a[i] = max({ a[i + 1], a[i], b[i] });
		}
		for (int i = 1;i < n;i++)a[i] += a[i - 1];
		
		while (q--)
		{
			int l, r;
			cin >> l>> r;
			l--, r--;
			l==0?cout << a[r]: cout << a[r] - a[l - 1];
			cout << ' ';
		}
		el
	}
	return 0;
}
