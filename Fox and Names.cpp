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
const int N = 27;
bool vis[N];
bool onVis[N];
string ans = "";
bool dfs(int i , gr& g)
{
	vis[i] = 1;
	onVis[i] = 1;
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			if (!dfs(it, g))return 0;
		}
		else if (onVis[it])return 0;
	}
	onVis[i] = 0;
	ans.push_back(char(i + 'a'));
	return 1;
}
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
		gr g(27);
		vector<string>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		for (int j = 1; j < n; j++)
		{
			string s = v[j],t=v[j-1];
			int i = 0;
			while (i < (min(s.size(), t.size())) && s[i] == t[i])
			{
				i++;
			}
			if (i < (min(s.size(), t.size())))
			{
				
				g[s[i] - 'a'].push_back(t[i] - 'a');
			}
			else if (t.size() > s.size())
			{
				cout << "Impossible";
				return 0;
			}


		}
		
		for (int i = 0; i < 26; i++)
		{
			if (!vis[i])
			{
				if (!dfs(i, g))
				{
					cout << "Impossible";
					return 0;
				}
			}
		}
		cout << ans;
	}

	return 0;
}
