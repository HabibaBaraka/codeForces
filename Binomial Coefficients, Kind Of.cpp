/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7; 

ll fast_power(ll base, ll p) {
	ll res = 1;
	while (p != 0) {
		if (p % 2 == 0) {
			p /= 2;
			base *= base;   //base *= base%mod can ignore it already mod
			base %= mod;
		}
		else {
			p--;
			res *= base % mod;
			res %= mod;
		}
	}
	return res;
}

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//memset(dp, -1, sizeof dp);
	vector<ll>p(1e5+2);
	for (int i = 1; i <= 1e5; i++)
	{
		p[i]=(fast_power(2, i));
	}
	cin >> t;
	vector<pair<int, int>>v(t);
	int i = 0;
	for(int i=0;i<t;i++)
	{
		cin >> v[i].first;
		
	}
	for (int i = 0; i < t; i++)
	{
		cin >> v[i].second;

	}
	for (int i = 0; i < t; i++)
	{
		cout << p[v[i].second]; el;

	}
}
