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
		vector<int>v(n),pre(n+1);
		for (auto& it : v)cin >> it;
		int st = -1;
		for (int i = 0; i < n; i++)
		{
			pre[i+1] = pre[i] + v[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (i + k < n && (pre[i + k] - pre[i] ==0))
			{
				st = i;
				break;
			}

		}
		if (st == -1)cout << 0;
		else
		{
			int cnt = 0;
			for (int i = st; i < n; i++)
			{
				if (i + k <= n && (pre[i + k] - pre[i] == 0))
				{
					
					cnt++;
					i += k ;
					
					
				}
			}
			cout << cnt;
		}
		
		el;
	}
}
/*
الحمدلله رب العالمين
*/
