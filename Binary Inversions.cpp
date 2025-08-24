
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
ll clc(vector<int>& v, vector<int>& p)
{
	ll inv = 0;
	int n = v.size();
	for (int i = 0; i < n; i++)
	{
		if (v[i] == 0)inv += p[i];
	}
	return inv;
}
int main()
{
	Baraka
	
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n),p(n),z,p2(n);
		for (auto& it : v)cin >> it;
		p[0] = v[0];
		for (int i = 1; i < n; i++)p[i] = v[i] + p[i - 1];
		ll mx = clc(v,p);
	
			z = v;
			
			for (int i = n - 1; i >= 0; i--)
			{
				if (z[i] == 1) { z[i] = 0; break; }
			}
			p2[0] = z[0];
			for (int i = 1; i < n; i++)p2[i] = z[i] + p2[i - 1];
			mx = max(clc(z, p2), mx);
		
	
			z = v;
		
			for (	int i = 0;i<n;i++)
			{
				if (z[i] == 0) { z[i] = 1; break; }
			}
			p2[0] = z[0];
			for (int i = 1; i < n; i++)p2[i] = z[i] + p2[i - 1];
			mx = max(clc(z, p2), mx);
		
		cout << mx; el;
}
	return 0;
}
