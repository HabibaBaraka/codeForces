//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<vector>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 509
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{

	int t = 1;
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		int n, c, d;
		cin >> n >> c >> d;
		vector<int>v(n*n),v2;
		for (auto& it : v)cin >> it;
		int x = *min_element(v.begin(), v.end());
		for (int i = 0; i < n; i++,x+=c)
		{
			int x2 = x;
			
			for (int j = 0; j < n; j++, x2 += d)v2.push_back(x2);
		}
		sort(v.begin(), v.end());
		sort(v2.begin(), v2.end());
		v == v2 ? cout << Y : cout << O; el;
		
	}

	return 0;
}
