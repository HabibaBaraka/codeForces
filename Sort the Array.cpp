
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
		vector<ll>v(n);
		for (auto& it : v)cin >> it;
		if (is_sorted(v.begin(), v.end()))
		{
			cout << Y;
			cout << 1 << " " << 1;
		}
		else
		{
			int id = -1;
			for (int i = 0; i < n-1; i++)
			{
				if (v[i] > v[i + 1])
				{
					id = i;
					break;
				}
			}
			int id2 = -1;
			
			for (int i=id+1; i < n; i++)
			{
				if (v[i] > v[i - 1])
				{
					id2 = i-1;
					break;
				}
			}
			if(id!=-1&&id2==-1)id2=n-1;
		//	cout<<id<<" "<<id2;el
		reverse(v.begin() + id, v.begin() + id2+1);
			if (is_sorted(v.begin(), v.end()))
			{
				cout << Y;
				cout << id+1 << " " << id2+1;
				el
			}
			else cout << O;
		}
	}
	return 0;
}
