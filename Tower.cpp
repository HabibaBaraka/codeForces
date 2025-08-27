 
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
const int N = 1e5 + 7;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//	cin >> t;
	while (t--)
	{
		int n,k;
		cin >> n>>k;
		vector<int>v(n), nv(n);
		for (auto& it : v)cin >> it;
		vector<pair<int, int>>ans;
	
		nv = v;
		sort(nv.begin(), nv.end());
    int diff=v[n-1]-v[0];
		while (k-- && diff > 0)
		{
			
			int x=-1, y=-1;
			for (int i = 0; i < n; i++)
			{
				if (v[i] == nv[0]&&x==-1)
				{
					x = i + 1;
					v[i]++;
				}
				else if (v[i] == nv[n - 1]&&y==-1)
				{
					y = i + 1;
					v[i]--;
				}
			}
			nv = v;
			sort(nv.begin(), nv.end());
			diff = min(diff, nv[n - 1] - nv[0]);
			ans.push_back({ y,x });


		}
		sort(nv.begin(), nv.end());
		diff = min(diff, nv[n - 1] - nv[0]);
		cout << diff<<' '<<ans.size();
		el
			for (auto it : ans)
			{
				cout << it.first << ' ' << it.second;el
			}

	}
	return 0;
}
