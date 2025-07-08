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
int n, s;

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	//cin >> t;

	while (t--)
	{
		cin >> n >> s;
		if (n * 9 < s)
		{
			cout << -1 << " " << -1;

		}
		else if (n == 1 && s == 0)cout << 0 << " " << 0;
		else if (n > 1 && s == 0)cout << -1 << " " << -1;
		else
		{
			string st = "",st_mn;
			for (int i = 0; i < n; i++)
			{
				for (int o = '9'; o >= '0'; o--)
				{
					if (s - (o - '0') >= 0)
					{
						s -= (o - '0');
						st += o;
						break;
					}
				}
			}
			st_mn = st;
			reverse(st_mn.begin(), st_mn.end());
			if (st_mn[0] == '0')
			{
				st_mn[0] = '1';
				for (int i = 1; i < n; i++)
				{
					if (st_mn[i] != '0') {
						st_mn[i]--; break;
					}
				}
			}
			cout <<st_mn<<" "<< st;
		}
	}
}
