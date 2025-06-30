/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<unordered_map>
#include<stack>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;

int  main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	//cin >> t;

	while (t--)
	{

		string s, st,ans="";
		cin >> s >> st;
		if (s.length() < st.length())swap(st, s);
		reverse(s.begin(), s.end());
		reverse(st.begin(), st.end());
		
		int out = 0;
		for (int i = 0; i < s.size(); i++)
		{
			int a, b, c;
			a = s[i] - '0';
			(i<st.size())?b = st[i] - '0':b=0;
			(out > 0) ? c = a + b + out : c = a + b; out = 0;
			if (c > 9)
			{
				//cout << c; el;
				int over = c % 10;
				ans += (over + '0');
				c /= 10;
				out = c;
			}
			else ans += (c + '0');
			//cout << ans; el;
		}
		if (out != 0)ans += (out + '0');
		reverse(ans.begin(), ans.end());
		
		cout << ans;
	}
}
