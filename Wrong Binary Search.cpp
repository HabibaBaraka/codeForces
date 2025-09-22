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
const ll  mod = 998244353;
#define graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e7 + 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		string v;
		cin >> v;
		set<int>s;
		
		for (int i = 0; i < n; i++)
		{
			if (v[i] == '1')s.insert(i);
		}
		
		vector<int>a(n);
		bool f = 1;
		if (s.empty())
		{
			int x = 1, x2 = n;
			int i = 0;
			while (x < x2)
			{
				a[i] = x2;
				a[i + 1] = x;
				x++;
				x2--;
				i += 2;
			}
			if (n & 1)a[i] = x2;
		}
		else
		{
			
			int cnt = *s.begin();
			if (cnt == 1)f = 0;
			else
			{
				int x = 1, x2 = cnt ;
				int i = 0;
				while (x < x2)
				{
					a[i] = x2;
					a[i + 1] = x;
					x++;
					x2--;
					i += 2;
				}
				if (cnt & 1)a[i] = x2;
			}
			
			for (int i = 0; i < n; i++)
			{
				if (v[i] == '1')
				{
					a[i] = i + 1;
					int x = i + 2;
					int x2 = -1;
					auto it = s.upper_bound(i);
					if (it == s.end())x2 = n;
					else x2 = *it;
					int cnt =  x2- i - 1;
					//cout << x << ' ' << x2;el
					if (cnt == 1)
					{
						f = 0;
						break;
					}
					else
					{
						i++;
						while (x < x2)
						{
							a[i] = x2;
							a[i + 1] = x;
							x++;
							x2--;
							i+=2;
						}
						if (cnt & 1)a[i] = x2;
						else i--;
					}
				}
			}
			

		}
		if (f) {
			cout << Y; for (auto it : a)cout << it << ' '; el
		}
		else cout << O;
	} 
	return 0;
}
