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

	//cin >> t;

	while (t--)
	{

		int n,k;
		cin >> n>>k;
		vector<ll>v(n),b(k);
		
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			
		}
		sort(v.begin(), v.end());
		for (int i = 1; i < n; i++)
		{
			v[i] += v[i - 1];
		}
		for (int i = 0; i < k; i++)cin >> b[i];
		for (auto it : b)
		{
			if (it < v[0])cout << 0<<" ";
			else if (it > v[n - 1])cout << n<<" ";
			else {
				auto  idn = lower_bound(v.begin(), v.end(), it);
				if (idn != v.end())
				{
					if (*idn > it)cout << idn - v.begin()<<" ";
					else cout << idn - v.begin() + 1<<" ";
				}
			}
		}
		
	}
}
