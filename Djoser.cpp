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

ll dis[N];

ll n, m,k,mx;
void DG(ll x, ll y, ll val, G& g)
{
	g[x].push_back({ y,val });
}


int dfs(int i, ll dist, G& g)
{
	dis[i] = dist;

	int ch = 1;
	
	for (auto it : g[i])
	{
		ch+=dfs(it.first, dist + it.second,g);
	}
	if(dis[i]>k)mx = max(mx, (dis[i]- k) * ch);
	return ch;
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
		
		mx=0;
		cin >> n>>k;
		G g(n + 1);
		m = n - 1;
	  set<int>s;
		for (int i = 0; i < m; i++)
		{
			int x, y, val;
			cin >> x >> y >> val;
			DG(x, y, val, g);
			s.insert(y);
		}
		int rt = 0;
		int  s2 = n * (n + 1) / 2;
		for (auto it : s)s2-= it;

	

		for (int i = 1; i <= n; i++) { 
			dis[i] = LLONG_MAX;
		
		}
		rt=s2;
	dfs(rt,0,g);
	ll sum=0;
	for(int i=1;i<=n;i++)sum+=dis[i];
		cout << sum-mx;

		el;
	}
}
/*
الحمدلله رب العالمين
*/
