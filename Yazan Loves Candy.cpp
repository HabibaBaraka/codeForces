/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<string>
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
const float pi = 3.14;
int main()
{
	freopen("candy.in", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n);
		for (auto& it : v)cin >> it;
		int ans = 0;
		for (int i = 0; i < n-1; i++)
		{
			if (v[i] > v[i + 1])
			{
				for (int j = i + 1; j < n; j++)
				{
					if (v[j] > v[i]) {
						i = j - 1; break;
					}
					else ans = max(ans, v[j]);
			    }
			}
		}
		cout << ans;
		 el;
	}
}
