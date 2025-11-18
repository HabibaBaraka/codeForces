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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		string s;
		cin >> s;
		n = s.size();
		if (n == 1) {
			cout << 1;el continue;
		}

		 if (s.find(">*") != -1 || s.find("**") != -1 || s.find("*<") != -1||s.find("><") != -1) { cout << -1;el continue; }
		int mxl = 0, mxr = 0;
		for (int i = 0;i < n;i++)
		{
			int cnt = 1;
			int j = i + 1;
			if (i > 0 && s[i - 1] == '*')cnt++;
			while (j < n && s[j] == s[i]||s[j]=='*')
			{
				j++;
				cnt++;
			}
			if (s[i] == '<')mxl = max(mxl, cnt);
			else mxr = max(mxr, cnt);
			i = j - 1;
		}
		cout << max(mxl, mxr);
		el
	}
	return 0;
}
