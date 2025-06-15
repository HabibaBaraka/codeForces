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
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
ll calc(ll a, ll b, ll x, ll y, ll k)
{
	
	ll ans = 0;
	if (k >= a) {
		
		ans+= (k - a) / x+1;
		k-= ans*x;
	}
	if (k >= b)
	{
		
		ans += (k - b) / y+1;
	
	}
	return ans;
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		ll k, a, b, x, y;
		cin >> k >> a >> b >> x >> y;
		if (k < a && k < b)cout << 0;
		else
		{
			cout << max(calc(a, b, x, y, k), calc(b, a, y, x, k) );
		}



		el;

	}
	return 0;
}
