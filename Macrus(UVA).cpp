//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<cstring>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "Yes"
#define O "No"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

bool vis[9][9];
char a[9][9];
int n, m;
string s = "IEHOVA#", ans;
bool valid(int i, int j)
{
	return i >= 0 && i < n && j >= 0 && j < m && (s.find(a[i][j]) !=string::npos);
}
void Bfs(pair<int, int>& st, pair<int, int>& ed)
{
	queue<pair<pair<int, int>, string>>q;
	q.push({ st,"" });
	vis[st.first][st.second] = 1;
	while (!q.empty())
	{
		pair<int, int>p = q.front().first;
		string path = q.front().second;
		q.pop();
		if (p == ed)
		{
			ans = path;
			return ;
		}
		else
		{
			for (int o = 0; o < 3; o++)
			{
				int nx = p.first + dx[o], ny = p.second + dy[o];
				if (valid(nx, ny) && !vis[nx][ny])
				{
					q.push({ {nx,ny},path + dir[o] });
					vis[nx][ny] = 1;
				}
			}
		}
	}
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
	 memset(vis,0,sizeof vis);
	  
		cin >> n >> m;
		pair<int, int>st, ed;
		for(int i=0;i<n;i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == '@')
					st = { i,j };
				else if (a[i][j] == '#')ed = { i,j };
			}
		}
		Bfs(st, ed);
		
		for(int i=0;i<ans.size();i++)
		{
		  char c=ans[i];
		  if(c=='R')cout<<"right";
		  else  if(c=='L')cout<<"left";
		  else cout<<"forth";
		  if(i<ans.size()-1)cout<<" ";
		  
		}
		el;
	}

	return 0;
}
