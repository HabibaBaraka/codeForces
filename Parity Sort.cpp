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
#include<map>
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

	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>a(n), b(n);
		for (auto& it : a)cin >> it;
		b = a;
		sort(b.begin(), b.end());
		unordered_map<ll, bool>mp;
		set<int>e, o;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				(a[i] & 1) ? o.insert(i + 1) : e.insert(i + 1); mp[a[i]] = 1;
			}
		}bool f = 1;
		for (int i = 0; i < n; i++)
		{
			if (a[i]!=b[i]&&mp[b[i]])
			{
				if (b[i] & 1)
				{
					if (o.count(i + 1) == 0)
					{
						f = 0; break;
					}
				}
				else
				{
					if (e.count(i + 1) == 0)
					{
						f = 0; break;
					}
				}
			}
		}
		f ? cout << Y : cout << O; el;
	}
}
