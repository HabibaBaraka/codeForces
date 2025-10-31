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
#include<set>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e6;

vector<bool>is_prime(N+1,1);
void sieve(ll n) {//preroccing
	
vector<int>divide(n + 1, 0);
	is_prime[0] = false, is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			divide[i] = i;
			for (int j = 2 * i; j <= n; j += i) {
				if (divide[j] == 0)divide[j] = i;
				is_prime[j] = false;
			}
		}
	}
}
bool can(ll x, vector<ll>& v)
{
	for (auto it : v)
	{
		if (gcd(it, x) == 1)return 1;
	}return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
sieve(1e6);
vector<int>v2;
	for(int i=0;i<is_prime.size();i++)
		{
		  if(is_prime[i])v2.push_back(i);
		}
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		vector<ll>v(n);
	
		for (auto& it : v) {
			cin >> it;
		}
	
	//cout<<gcd(10,gcd(2,gcd(4,6)));
	ll ans=-1;
	for(auto it:v2)
	{
	  if(can(it,v))
	  {
	    ans=it;
	    break;
	  }
	}
	cout<<ans;el;
	}
	return 0;
}
