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
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<int>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 500 + 4;
const ll mod = 1e9 + 7;
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;
	
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n),a(n);
		for (auto& it : v)cin >> it;
		for (auto& it : a)cin >> it;
		set<int>s;
		sort(v.begin(), v.end());
		sort(a.begin(), a.end());
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			auto it = lower_bound(a.begin(), a.end(), v[i]);
			if (it > a.begin()) {
				it--;
				while (it > a.begin() && s.count(*it) > 0)
				{
					it--;
				}
				if (it != a.end()&&s.count(*it)==0)
				{
					//cout << *it; el;
					s.insert(*it);
					ans++;
				}
			}
		}
		cout << ans;
	}
}
