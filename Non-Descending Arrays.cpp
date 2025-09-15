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
#include<cstring>
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
ll dp[100][2];
int a[100],b[100];
int n;
ll clc(int i, int op)
{
	// base case 
	if (i >= n)return 1;

	if (i > 0)
	{
		if (!op && (a[i] < a[i - 1] || b[i] < b[i - 1]))return 0;
		if (op &&( b[i] < a[i - 1] || a[i] < b[i - 1]))return 0;
	}
	
	ll& ret = dp[i][op];
	if (~ret)return ret;
	// transition 
	// leave
	ret = 0;
	return ret = (clc(i + 1, 0) % mod + clc(i + 1, 1) % mod)%mod;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
	
		memset(dp, -1, sizeof dp);
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		
		}
		for (int i = 0; i <n; i++)
		{
			cin >> b[i];
			
		}
		cout << clc(0, 0);el
	}

	return 0;
}
