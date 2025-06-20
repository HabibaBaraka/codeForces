/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
//const char dir[] = { 'R','L','U','D' };

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;

int cnt;


int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n);
		for (auto& it : v)cin >> it;
		int mx = v[0], mn = v[0];
		for(int i=1;i<n;i++)
		{
			if (v[i] > mx || v[i] < mn)cnt++;
			mn = min(v[i], mn);
			mx = max(mx, v[i]);
			
		}
		cout << cnt;
		el;
	}
}
