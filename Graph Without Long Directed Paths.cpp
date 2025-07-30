// Only This Week.cpp 

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
#include<iomanip>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<map>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e5+9;
bool vis[N];
int co[N];
bool dfs(int i, int c, gr& g)
{

	vis[i] = 1;
	co[i] = c;
	for (auto it : g[i])
	{
		if (!vis[it])
		{
			if(!dfs(it, 1 - c, g))return 0;
		}
		else if (co[it] == co[i])
		{
			return 0;
		}
	}
	return 1;
}
void UDG(int x, int y, gr& g)
{
	g[x].push_back(y);
	g[y].push_back(x);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	//sieve(N);
	while (t--) {
		int n;
		int m;
		cin >>n>> m;
		gr g(n + 1);
		vector<pair<int, int>>p;
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			UDG(x, y, g);
			p.push_back({ x,y });
		
		}
		bool Bib=dfs(1, 1, g);
		if (!Bib)cout << O;
		else
		{
		  cout<<Y;
		for(int i=0;i<m;i++)
		{
		 cout<<(co[p[i].first]>co[p[i].second]);
		}
		}
	}
	return 0;
}
