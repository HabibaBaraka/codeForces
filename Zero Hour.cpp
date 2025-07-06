/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<int>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 200000 + 4;
const ll mod = 1e9 + 7;
ll a[N];
ll dp[N];
int n, k;

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int cnt = 0;
		vector<int>MSB(66, 0),v;
		while (n--)
		{
			ll x;
			cin >> x;
			if (x == 0)cnt++;
			else {
				int msb = (log2(x));
				MSB[msb]++;
			}
		}
		for (auto it : MSB)
		{
			if (it != 0)v.push_back(it);
		}
		sort(v.begin(), v.end());
		ll ans = 0;
		
		for (int i = 0; i < v.size(); i++)
		{
			ans += (v[i] - ans);
		}
		(ans==0&&cnt>0)?cout<<1:cout << ans; el;
	}
}
