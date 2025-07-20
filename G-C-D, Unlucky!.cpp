/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<stack>
#include<numeric>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,1,-1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<pair<int,ll>>>
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const int N = 1e5 + 4;
const ll mod = 1e9 + 7;


int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	ll t = 1;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector <ll>v(n),p(n),s(n);
		for (auto &it : p)cin >> it;
			for (auto &it : s)cin >> it;
			for(int i=0;i<n;i++)
			{
			 v[i]=lcm(p[i],s[i]);
			}
			ll g = 0;
bool f = 1;
for (int i = 0; i < n; i++)
{
	g = gcd(g, v[i]);
//	cout<<g<<" ";
	if (g != p[i])f = 0;
}
g = 0;
for (int i = n-1; i >=0; i--)
{
	g = gcd(g, v[i]);
	//	cout<<g<<" ";
	if (g != s[i])f = 0;
}

		f ? cout << Y : cout << O;
	}
}
/*
الحمدلله رب العالمين
*/
