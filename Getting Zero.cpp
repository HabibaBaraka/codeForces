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
//const char dir[] = { 'R','L','U','D' };
#define gr vector<vector<int>>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 32768;
int dist[mod+1] ;
int mn = INT_MAX;
void  bfs(gr &g)
{
  memset(dist,-1,sizeof dist);
	queue<int>q;
	q.push(0);
	dist[0] = 0;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (auto it : g[u])
		{
			if (dist[it] == -1)
			{
			  q.push(it);
				dist[it] = dist[u] + 1;
				
			}
		}
		
	}
	
}
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
		gr g(mod+1);
		for (int i = 0; i < mod; i++)
		{
			int mul = (2 * i )% mod;
			int add = (1 + i) % mod;
			g[mul].push_back(i);
			g[add].push_back(i);
		}
		bfs(g);
		for (auto it : v)
		{
			cout <<dist[it]<< " ";
			
		}

		el;
	}
}
