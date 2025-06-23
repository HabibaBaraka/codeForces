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
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7; ;
int n, m,a[100][100];
bool valid(int i,int j) {
	return i >= 0 && i < n && j >= 0 && j < m;
}
bool ch(int i, int j)
{
	for (int o = 0; o < 4; o++)
	{
		int nx = i + dx[o], ny = j + dy[o];
		if (valid(nx, ny) && a[i][j] == a[nx][ny]) {
			
			return 1;
		}
	}
	return 0;
}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		cin >> n >> m;
		 set<int>s;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				s.insert(a[i][j]);
			}
		}
		int sz = s.size();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (ch(i, j))
				{
					auto it = s.lower_bound(a[i][j]);
					if (it != s.end()&&*it==a[i][j]) {
						s.erase(it);
					}
				}


			}
		}
		
		if (sz - 1 <= s.size())cout << sz - 1;
		else
		{
			int cnt = sz - 1;
			int dif = cnt -s.size();
			cout << dif * 2 + s.size();
		}
		el;
	}
}
