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
const ll  mod = 998244353;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e7 + 7;
int n;
string s = "narek";
ll dp[1001][5];
string a[1001];
ll clc(int i = 0, int c = 0)
{
	// base case 

	if (i == n)return -c;
	ll& ret = dp[i][c];
	if (ret != -1e18)return ret;
	// transition
	ret = max(ret, clc(i + 1, c));
	int sc = 0;
	for (char x : a[i])
	{
		if (s[c] == x)
		{
			c++;
			if (c == 5)
			{
				sc += 5;
				c = 0;
			}
		}
		else  if(s.find(x)!=-1)sc--;
	}
	
	ret = max(ret, clc(i + 1, c) + sc);
	return ret;

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{

		int m;
		cin >> n >> m;

		for (int i = 0; i < n; i++)cin >> a[i];

		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < 5; j++)
			{
				dp[i][j] = -1e18;
			}
		}

		cout << clc();

		el
	}

	return 0;
}
// الحمدلله رب العالمين
