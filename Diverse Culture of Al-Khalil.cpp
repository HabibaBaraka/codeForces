// Only This Week.cpp 

//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<map>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 200;
int n, m;

bool can(ll s, vector<ll>&v)
{
	ll cnt = 1;
	auto it = lower_bound(v.begin(), v.end(), v[0] + s);
	while (it != v.end())
	{
		cnt++;
		auto itt = lower_bound(v.begin(), v.end(), *it + s);
		it = itt;
	}
	return cnt >= m;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	
	while (t--) {
		
		cin >> n;
		vector<ll>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		sort(v.begin(),v.end());
		
		cin >> m;
		ll l = 1, r = 1e6, mid, s = 0;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (can(mid,v))
			{
				s = mid;
				l = mid+1;
			}
			else r = mid - 1;
		}
		cout << s;
	}
	return 0;
}
