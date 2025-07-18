/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,1,-1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<pair<int,ll>>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 1e5 + 4;
const ll mod = 1e9 + 7;
const float pi = 3.14;


int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		multiset<pair<pair<int, int>, ll>>s;
		while(n--)
		{
			ll x, y, val;
			cin >> x >> y >> val;
			s.insert({ {x,y},val });
		}
		ll nc = k;
		for (auto it : s)
		{
			ll x, y, val;
			x = it.first.first, y = it.first.second, val = it.second;
			if (nc >= x && nc <= y)
			{
				nc = max(nc, val);
			}
		}
		cout << nc;
		el;
	}
}
/*
الحمدلله رب العالمين
*/
