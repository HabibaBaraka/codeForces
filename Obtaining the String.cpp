
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
const int N = 1e5+ 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int tc = 1;
//	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		string s, t;
		cin >> s >> t;
		vector<int>a;
		
		for (int i = 0; i < n; i++)
		{
			freq[s[i] - 'a'].insert(i);
		}
		for (int i = 0; i < n; i++)
		{
			if (s[i] != t[i])
			{
				int idx = -1;
				for (int k = i; k < n; k++)
				{
					if (s[k] == t[i])
					{
						idx = k;
						for (int m = k; m > i; m--)
						{
							swap(s[m], s[m - 1]);
							a.push_back(m - 1);

						}
						break;
					}
				}
			}

		}
		if (s == t)
		{
		  cout<<a.size();el
			for (auto it : a)
			{
				cout << it + 1<<' ';
			}
		}
		else cout << -1;
	}

	return 0;
}
