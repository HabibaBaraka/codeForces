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
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
vector<int>v;
vector<int>sieve(ll n) {//preroccing
	vector<int>divide(n + 1, 0);
	vector<bool>is_prime(n + 1, true);
	is_prime[0] = false, is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			v.push_back(i);
			divide[i] = i;
			for (int j = 2 * i; j <= n; j += i) {
				if (divide[j] == 0)divide[j] = i;
				is_prime[j] = false;
			}
		}
	}
	return divide;
}
bool is_pr(int n)
{
	if (n % 2 == 0)return 0;
	for (int i = 3; i * i <= n; i++)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}
int main()
{
	sieve(1e6 + 5);
	int t = 1;
	//cin >> t;
	while (t--) {
		int n,x;
		cin >> n>>x;
		vector<ll>v(n);
		for (auto& it : v)cin >>it;
		vector<int>bit(64, 0);
		int l = 0, r = 0, mx = 0;
		while (l < n)
		{
			bool f = 0;
			
			while (r < n)
			{
				
				for (int i = 0; i < 64; i++)
				{
					if ((v[r] >> i) & 1ll)bit[i]++;
					if (bit[i] > x)f = 1;
				}
				r++;
				if (f)break;
				
			//	cout << v[r]; el;
			}
			if (f)mx = max(mx, r - l - 1);
			else mx = max(mx, r - l);

			for (int i = 0; i < 64; i++)
			{
				if ((v[l] >> i) & 1ll)bit[i]--;
				
			}
			l++;
		}
		cout << mx;
		el;
	}

	return 0;
}
