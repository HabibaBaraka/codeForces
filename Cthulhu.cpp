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
#include<stack>
#include<queue>
using namespace std;
#define ll long long
#define ld long double
#define Y "Yes"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
#define gr vector<vector<int>>
bool vis[int(1e5)];
vector<int>a;
int cost = 1e4;
int par[N] = { -1 };
int e = 0;
void  Bfs(int i,gr&g)
{

	queue<int>q;
	q.push(i);
	par[i] = 0;
	vis[i] = 1;
	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		
		
		for (auto it : g[n]) {
			if (!vis[it])
			{
				
				q.push(it);
				vis[it] = 1;
			}
	
		}
	}

}

int main()
{
	int t = 1;
	//n >> t;
	while (t--) {
	
		int n, m;
		cin >> n >> m;
		gr g(n + 1);
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
			
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{     
			if (!vis[i])
			{
				Bfs(i, g);
				cnt++;
			}
		}
		
		if (cnt == 1 && m==n&&n>=3)
			cout << "FHTAGN!";
		else cout << O;
	}

	return 0;
}
