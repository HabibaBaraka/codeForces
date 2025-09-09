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
const int N = 1e7 + 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		ll k, x;
		ll n;

		cin >> k >> x;
		n = (1ll << k);
		
		if (n == x)
		{
			cout << 0;
			el;
			continue;
		}
		ll a = x, b = (1ll<<(k+1)) - x;
		string s = "",s2="";
	
		bool f = 1;
		int cnt = 0;
		
		while (a!=n&&cnt<120)
		{
			if (a > b)
			{
				a -= b;
				b += b;
				s.push_back('2');
				cnt++;
			}
			else if (b > a)
			{
				b -= a;
				a += a;
				s.push_back('1');
			}
			else
			{
				f = 0;
				break;
			}
			cnt++;
		}
		bool f2 = 1;
		a = x, b = (1ll<<(k+1)) - x; cnt = 0;
		
		while (a != n && cnt < 120)
		{
			if (b > a)
			{
				b -= a;
				a += a;
				s2.push_back('1');
				cnt++;
			}
			else if (a > b)
			{
				a -= b;
				b += b;
				s2.push_back('2');
			}
			else
			{
				f2 = 0;
				break;
			}
			
			cnt++;
		}
		reverse(s.begin(), s.end());
		reverse(s2.begin(), s2.end());
		if (f && f2)
		{
			if (s.size() <= s2.size())
			{
				cout << s.size(); el
					for (char it : s)
					{
						cout << it << ' ';
					}
			}
			else
			{
				cout << s2.size(); el
					for (char it : s2)
					{
						cout << it << ' ';
					}
			}
		}
		else if (f)
		{
			cout << s.size(); el
				for (char it : s)
				{
					cout << it << ' ';
				}
		}
		else
		{
			cout << s2.size(); el
				for (char it : s2)
				{
					cout << it << ' ';
				}
		}
		el
	}

	return 0;
}
