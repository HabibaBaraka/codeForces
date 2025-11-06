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
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 2e5+9;
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
		vector<ll>v(n),a,b;
		ll x = -1, y = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			if (v[i] % 2 == 0)a.push_back(v[i]);
			else b.push_back(v[i]);
		}
		if(n==2)
		{
		  if((v[1]%v[0])%2==0)
		  {
		    cout<<v[0]<<' '<<v[1];
		    el
		    continue;
		  }
		  else 
		  {
		    cout<<-1;
		    el
		    continue;
		  }
		  
		}
		if (a.size() > 1)
		{
			cout << a[0] << ' ' << a[1];
		}
		else if (b.size() > 1)
		{
			for (int i = 0; i < b.size(); i++)
			{
			  bool f=0;
			  for(int j=i+1;j<b.size();j++)
			  {
			    if ((b[j] % b[i]) % 2 == 0)
				{
					x = b[i], y = b[j];
					f=1;
					break;
				}
			  }
			  if(f)break;
			}
			if (x != -1 && y != -1)cout << x << ' ' << y;
			else if (a.size() == 1)
			{
				for (int i = 0; i < b.size(); i++)
				{
					if (a[0] > b[i])
					{
						if ((a[0] % b[i]) % 2 == 0)
						{
							x = b[i], y = a[0];
							break;
						}
					}
					else if (a[0] < b[i] && ((b[i] % a[0]) % 2 == 0))
					{
						x = a[0], y = b[i];
						break;
					}
				}
				if (x != -1 && y != -1)cout << x << ' ' << y;
				else cout << -1;

			}
			else cout << -1;
			
		}
		else cout << -1;
		el
	}
	return 0;
}
