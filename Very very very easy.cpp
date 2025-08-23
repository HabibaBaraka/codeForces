
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
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<map>
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


int main()
{
	Baraka
	//SPF();
	int t = 1;
	cin >> t;
	while (t--)
	{
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		int x=-1, y=-1;
		ll z = a * b;
	
		for (int i = a + 1; i <= c; i++)
		{
	    	ll m = z / gcd(z, i);
			bool f = 0;
			ll j = m * ceil(1.0 * (b + 1) / m);
				if (j<=d)
				{
					f = 1;
					x = i, y = j;
					break;
				}
			}

		
		
		
		cout << x << " " << y;
		el
	}
	return 0;
}
