//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<vector>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 6000
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
string s;
int n;
ll dp[N][6];
ll calc(int i, int c)
{
	// base case 
	if (i == n)
	{
		if (c == 3 || c == 4 || c == 1 || c == 2||c==5)return 0;
		return INT_MIN;
	}
	ll& ret = dp[i][c];
	if (~ret)return ret;
	// transition
	ret = 0;
	if (c == 0)
	{
		ll a = 0, b = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, 1) + 1;
			b += calc(i + 1, c);
		}
		else {
			b += calc(i + 1, 4) + 1; a += calc(i + 1, c);
		}
		ret = max({ ret,a,b });
	}
	else if (c == 1)
	{
		ll a = 0, b = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, c) + 1;
			b += calc(i + 1, c);
		}
		else {
			b += calc(i + 1, 2) + 1; a += calc(i + 1, c);
		}
		ret = max({ ret,a,b });
	}
	else if (c == 2)
	{
		ll a = 0, b = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, 3) + 1;
			b += calc(i + 1, c);
		}
		else {
			b += calc(i + 1, c) + 1; a += calc(i + 1, c);
		}
		ret = max({ ret,a,b });
	}
	else if (c == 4)
	{
		ll b = 0, a = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, 5) + 1;
			b += calc(i + 1, c);
		}
		else {
			b += calc(i + 1, c) + 1;
			a += calc(i + 1, c);
		}
		ret = max({ ret, b,a });
	}
	else if (c == 3)
	{
		ll a = 0, b = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, c) + 1;

		}
		else {
			a += calc(i + 1, c);
		}
		ret = max(ret, a);
	}
	else if (c == 5)//ba
	{
		ll a = 0, b = 0;
		if (s[i] == 'a') {
			a += calc(i + 1, c) + 1;

		}
		else {
			a += calc(i + 1, c);
		}
		ret = max(ret, a);
	}
	
	return ret;
}
int main()
{

	int t = 1;
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//	cin >> t;
	while (t--) {
		cin >> s;
		n = s.size();
		memset(dp, -1, sizeof dp);
		cout << calc(0, 0);
		el;
	}

	return 0;
}
