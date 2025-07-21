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
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100006
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int MAX = 1e6+4;
vector<int>spf(1e6 + 1);
vector<int>divs[N + 1];
void pre() {
	for (int i = 1; i <= N; i++) {

		for (int j = i; j <= N; j += i) {
			divs[j].push_back(i);
		}
	}
}

void SPF() {
	for (int i = 0; i < MAX; i++)
		spf[i] = i;

	for (int i = 2; i * i < MAX; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAX; j += i) {
				if (spf[j] == j)
					spf[j] = i;
			}
		}
	}

}
vector<int> getPrimeFactors(int x) {
	vector<int> factors;
	while (x != 1) {
		factors.push_back(spf[x]);
		x /= spf[x];
	}
	return factors;
}
int32_t main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int t = 1;

	SPF();
	//cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		map<ll, ll>mp;
		for (int i = 2; i <= n; i++)
		{
			vector<int>v = getPrimeFactors(i);
			for (auto it : v)mp[it]++;
		}
		int op;
		ll val = 1;
		while (q--)
		{
			cin >> op;
			if (op == 1)
			{
				int x;
				cin >> x;
				
				vector<int>v = getPrimeFactors(x);
				for (auto it : v)mp[it]++;
			}
			else
			{
				int x;
				cin >> x;
				map<ll, ll>mp2;
				vector<int>v = getPrimeFactors(x);
				for (auto it : v)mp2[it]++;
				int r = INT_MAX;
				for (auto it : mp2)
				{
					int need = mp[it.first] / it.second;
					r = min(r, need);
				}
				cout << r; el;
			}
		}


	}

	return 0;
}
