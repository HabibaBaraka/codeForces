
#include <iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
#define ll long long
#define O "NO"
#define Y "YES"
//const ll N = 2e5 + 7;
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1};
const char dir[] = { 'R','L','U','D' };
#define Graph vector<vector<int>>
// FIFO
ll ans = INT_MAX;
unordered_map<ll, bool>vis;
ll n, x;
void  Bfs(ll i)
{
	queue<pair<ll, ll>>q;
	q.push({ i,0 });
	vis[i] = 1;
	
	while (!q.empty())
	{
		pair<ll, ll>p = q.front();
		string s =to_string(p.first);
		ll op = p.second;
		q.pop();

		if (p.first> 1e19)break;
		if (s.size() == n)
		{
			
			ans = min(ans, op);
			//cout << s << endl;
		}
		else

		{
			for (char i = '2'; i <= '9'; i++)
			{
				if (s.find(i) != string::npos)
				{
					ll nn = p.first * (i - '0');
					if (!vis[nn]) {
						q.push({ nn,op + 1 });
						vis[nn] = 1;
					}
					
				}
			}
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)
	{
		
		cin >> n >> x;
		
		Bfs(x);
		ans == INT_MAX ? cout << -1 : cout << ans;
		// max n=19 max x=1e18
	}

}
