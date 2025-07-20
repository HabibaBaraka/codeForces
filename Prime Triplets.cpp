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
#define int long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };


vector<int>prif(1e6+1,0);
vector<bool>is_prime(1e6 + 10, true);
void sieve(int n) {//preroccing
	
	is_prime[0] = false, is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			
		
			for (int j = i * i; j <= n; j += i) 
			{
				
				is_prime[j] = false;
			}
		}
	}
	
}

void pre() {
	for (int i=2;i<=1e6;i++)
	{
	  int cnt=0;
	
			int p1 = i + 2;
			int p2 = i + 4;

			if (i + 6 <= 1e6 &&is_prime[i]&& (is_prime[i+6]) && (is_prime[i + 4]))cnt++;
			if (i + 6 <= 1e6 &&is_prime[i]&& (is_prime[i+2]) && (is_prime[i + 6]))cnt++;
		
			prif[i] += cnt+prif[i - 1];
		
	}

}
int32_t main()
{
  	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	sieve(1e6);
	pre();
	int t = 1;

	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if(b-6<a)cout<<0;
		else cout<<(prif[b-6]-prif[a-1]);
		el;
	}

	return 0;
}
