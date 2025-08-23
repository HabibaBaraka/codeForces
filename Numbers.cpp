
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
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<stack>
#include<map>
using namespace std;
#define ll long long
#define ld long double
#define Y "yes\n"
#define O "no\n"
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
	int t = 1;
	
	//cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll x = 0;
		for (int i = 2; i <= n - 1; i++)
		{
			int nn = n;
			while (nn)
			{
				x += nn % i;
				nn /= i;
			}
		}
	
		int y=n-2;
		if(gcd(x,y)!=1)
		{
		  int x1=x;
		  x/=gcd(x,y);
		  y/=gcd(x1,y);
		}
		cout << x << '/' <<y;
	}
	return 0;
}
