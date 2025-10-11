/*
	The Cow (2:28)

كَيْفَ تَكْفُرُونَ بِٱللَّهِ وَكُنتُمْ أَمْوَٰتًۭا فَأَحْيَـٰكُمْ ۖ ثُمَّ يُمِيتُكُمْ ثُمَّ يُحْيِيكُمْ ثُمَّ إِلَيْهِ تُرْجَعُونَ ٢٨

How can you deny Allah? You were lifeless and He gave you life,
then He will cause you to die and again bring you to life,
and then to Him you will ˹all˺ be returned.
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 25+9;
int n, m;
string s, ss;
bool vis[N][N];
bool valid(int x, int y)
{
	return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y];
}
void dfs(int i = 0, int j = 0)
{
	if (!valid(i, j))return;
	vis[i][j] = 1;
//	cout << i << ' ' << j;
	
		if (s[i] == '>')dfs(i, j + 1);
		else dfs(i, j - 1);

	if (ss[j] == '^' )dfs(i - 1, j);
	else dfs(i + 1, j);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
//	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		cin >> s >> ss;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				memset(vis, 0, sizeof vis);
				dfs(i, j);
				for (int k= 0; k < n; k++)
				{
					for (int l = 0; l < m; l++)
					{
						if (!vis[k][l])
						{
							cout << O;
							return 0;
						}
					}
				}
			}
		}
		cout << Y;
	}
	return 0;
}
