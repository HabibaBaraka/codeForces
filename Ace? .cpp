
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
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
#include<stack>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
#define Baraka ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 1e5 + 7;
ll dp[N];
int m;
int main()
{
	Baraka
	//SPF();
	int t = 1;
	//cin >> t;
	while (t--)
	{
	
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++)
		{
			int x = i;
			bool fr[10] = {};
			bool f = 1;
			while (x)
			{
				if (!fr[x % 10])
				{
					fr[x % 10] = 1;
				}

				else
				{
					f = 0;
					break;
				}
				x /= 10;
			}
			if (f)
			{
				cout << i;
				return 0;
			}
		}
		cout << -1;
		
	}
	return 0;
}
