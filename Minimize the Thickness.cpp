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
ll mod = 1e9 + 7;
int main()
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
		vector<ll>a(n),pre(n);
		for (auto &it : a)cin >> it;	pre[0] = a[0];
		for (int i = 1; i < n; i++)pre[i] = pre[i - 1] + a[i];
		int mn = n;
		
		for (int i = 0; i < n; i++)
		{
			bool f = 1;
			
			int l = i + 1, r ,mn2=i+1;
			while (l < n)
			{
				r = l; //cout << r << "  " << a[r]; el;
				ll sum = 0;
				while (sum < pre[i] && r < n)
				{
					sum += a[r];
					r++;
					//cout << sum << " "; el;
				}
				
				if (sum == pre[i])
				{
					mn2 = max(mn2, r - l);
					l = r;
				}
				else  {
					f = 0; break;
				}
			}
			if (f)
			{
				mn = min(mn, mn2);
			}
		}
		cout << mn;
		el;
	}
}
