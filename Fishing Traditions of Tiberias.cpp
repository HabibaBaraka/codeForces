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
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 101
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll>v(n);
		set <ll>s;
		map<ll, int>mp;
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			s.insert(x);
			mp[x] = i + 1;
			v[i] = x;
		}
		int q;
		cin >> q;
		ll k = 0;
		while (q--)
		{
			int op;
			cin >> op;
			if (op == 1)
			{
				ll x;
				cin >> x;
				k += x;
				k = (k + n) % n;
			}
			else
			{
				ll x;
				cin >> x;
				if (s.count(x))
				{
					if (k>0)
					{
					 if(((mp[x] + (k)) % n)==0)cout<<n;
					else cout << ((mp[x] + (k)) % n);
					}
					else 
					{
					  if((((mp[x]+(k))+n)%n)==0)cout<<n;
					  else  cout<<(((mp[x]+(k))+n)%n);
					
					}
				}
				else cout << -1;
				el;
			}
		}
	}
	return 0;
}
