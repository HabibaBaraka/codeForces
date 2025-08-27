//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
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
#define Baraka ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e6 + 7;
ll dp[N][2],a[N];
int n;
string s;
ll clc(int i,bool f)
{
	// base case 
	if (i == n)return 0;
	ll& ret = dp[i][f];
	if (~ret)return ret;
	// transition
	
	// leave
	if(s[i]=='0'||f)ret = max(ret, clc(i + 1, 0));
	
	// take
	if (i + 1 < n && ((s[i] == '0' && s[i + 1] == '1') || (f && s[i + 1] == '1')))ret = max(ret, clc(i + 1, 1) + a[i]);

	if (!f && s[i] == '1') ret = max(ret, clc(i + 1, 0) + a[i]);

	return ret;
}

int main()
{
	Baraka

		int t = 1;
	cin >> t;
	while (t--)
	{
		
	
		cin >> n;
	    cin >> s;
		for (int i = 0; i < n; i++) { cin >> a[i];dp[i][0]=dp[i][1]=-1;}
		cout << clc(0, 0);el
	}
	return 0;
}
