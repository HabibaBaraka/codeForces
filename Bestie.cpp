
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
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<queue>
#include<set>
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

int n;
ll v[22];

int clc(int i, int g)
{
	// base case 
		if (g == 1)return 0;
if(i>=n)return 1e9;
	//transition
	return min(clc(i + 1, gcd(g, gcd(v[i], i + 1))) + ((n -( i+1))+1),clc(i + 1, gcd(g, v[i])));
}
int main()
{
	Baraka
    int t = 1;
	
   cin >> t;
	while (t--)
	{

		cin >> n;
		
		for (int i = 0; i < n; i++)cin >> v[i];
	
		cout<<clc(0, 0);
		el;

	}
	return 0;
}
