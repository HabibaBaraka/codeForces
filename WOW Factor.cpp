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
//	cin >> tc;
	while (tc--)
	{
		int n;
		
		string s;
		cin >> s;
		n = s.size();
		int w = 0;
		vector<ll>p(n);
		for (int i = 0; i < n; i++)
		{
			int cnt = 0;
			while (i<n&&s[i] == 'v')
			{
				i++; cnt++;
			}
			if(cnt>0)w += cnt - 1;
			if(i<n)p[i] = w;
		}
		w = 0;
		for (int i=n-1;i>=0;i--)
		{
			int cnt = 0;
			while (i >=0 && s[i] == 'v')
			{
				i--; cnt++;
			}
			if(cnt>0)w += cnt - 1;
			if(i>=0)p[i]*= w;
		}
		
	//	for (int i = 1; i < n; i++)p[i] += p[i - 1];
		ll ret = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'o')ret += p[i];
		}cout << ret;el
	} 
	return 0;
}
