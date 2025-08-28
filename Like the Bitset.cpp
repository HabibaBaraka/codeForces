 
/*
	The Cow (2:28)

كَيْفَ تَكْفُرُونَ بِٱللَّهِ وَكُنتُمْ أَمْوَٰتًۭا فَأَحْيَـٰكُمْ ۖ ثُمَّ يُمِيتُكُمْ ثُمَّ يُحْيِيكُمْ ثُمَّ إِلَيْهِ تُرْجَعُونَ ٢٨

How can you deny Allah? You were lifeless and He gave you life,
then He will cause you to die and again bring you to life,
and then to Him you will ˹all˺ be returned.
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e5 + 7;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
		cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int k;
		cin >> k;
		string s;
		cin >> s;
		int mx = 0;
	
		for (int i = 0; i < n;)
		{
			if (s[i] == '1')
			{
				int cnt = 0;
				while (i < n && s[i] == '1')
				{
					i++; cnt++;
				}
				mx = max(cnt, mx);
			}
			else i++;
			
		}
		//cout << mx;el
		if (mx >= k)cout << O;
		else
		{
			cout << Y;
			vector<int>v(n);
			int x = 1;
			for (int i = 0; i < n; i++)
			{
				if (s[i] == '1')
				{
					v[i] = x;
					x++;
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (s[i] == '0')
				{
					v[i] = x;
					x++;
				}
			}
			for (auto it : v)
			{
				cout << it << ' ';
			}
			el
		}
	}
	return 0;
}
