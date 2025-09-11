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
		int n;
		cin >> n;
		deque<int>dq;
		int e = 2, o = 7;
		if (n < 5)
		{
			if (n == 4)
			{
				cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3;
			}
			else cout << -1;
		}
		else
		{
			while (e <= n)
			{
				dq.push_front(e);
				e += 2;
			}
			dq.push_back(5);
			dq.push_back(1);
			dq.push_back(3);
			while (o <= n)
			{
				dq.push_back(o);
				o += 2;
			}
			for (auto it : dq)
			{
				cout << it << ' ';
			}
		}
		el;
	}

	return 0;
}
