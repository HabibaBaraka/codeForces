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
vector<int>div(int n)
{
	vector<int>v;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			v.push_back(i);
			if (i * i != n)
				v.push_back((n / i));
		}
	}
	return v;
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll Max = -1;
		vector<int>d = div(n);
		vector<ll>v(n);
		for (auto& it : v)cin >>  it;
	
		for (int i = 0; i < d.size(); i++)
		{
			int k = d[i];
			int l = 0;
			ll mn=1e18, mx=-1e18;
			while (l < n)
			{
				ll sum = 0;
				for (int j=0; j < k; j++,l++)sum += v[l];
				mn = min(mn, sum);
				mx = max(mx, sum);
				
			}
			 Max = max(Max, abs(mx - mn));
			
		}
		cout << Max;
		el;

	}
	return 0;
}
