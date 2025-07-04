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
		vector<int>v(n),v2;
		v2 = v;
		for (auto& it : v)cin >> it;
		int ans = 0;
		int e1=0,e2=0,o1=0, o2=0;
		for (int i = 0; i < n; i+=2)
		{
			if (v[i] & 1)e1++;
			else o1++;
		}
		for (int i = 1; i < n; i += 2)
		{
			if (v[i] & 1)e2++;
			else o2++;
		}
		cout << min(e1+o2,e2+o1);
	}
}
