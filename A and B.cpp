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
const int N = 1e5 + 7;
string op[6] = { "a","b","ab","ba","aba","bab" };
ll clc(set<int>& st)
{
	int cnt = (st.size() / 2) + 1;
	int j = -1;
	for (auto it : st)
	{
		if (cnt == 0)break;
		cnt--;
		j = it;
	}
	st.erase(j);
	int x = j - 1;
	int x2 = j + 1;
	ll ans = 0;
	for (auto it : st)
	{
		if (it < j)
		{
			ans += x - it;
			x--;
		}
		if (it > j)
		{
			ans += it - x2;
			x2++;
		}
	}
	return ans;
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
		string s;
		cin >> s;
		set<int>st,st2;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'b')st.insert(i);
			else st2.insert(i);
		}
		
		cout << min(clc(st),clc(st2));
		
		el
	}
	return 0;
}
