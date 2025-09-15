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
const ll  mod = 998244353;
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
		vector<int>v(n),pr(n);
		for (auto& it : v)cin >> it;
		int s = 0;
		pr[0] = v[0];
		int l = 0, r = 0;
		for (int i = 1; i < n; i++)pr[i] += pr[i - 1] + v[i];
	
		for (int i = 0; i < n; i++)
		{
			int mo = pr[i] % 3;
			for (int j = i + 1; j < n - 1; j++)
			{
				if ((pr[j] - pr[i]) % 3 != mo)
				{
					if ((pr[n - 1] - pr[j]) % 3 != mo&& (pr[n - 1] - pr[j]) % 3!= (pr[j] - pr[i]) % 3)
					{
						l = i+1, r = j+1;
						break;
					}
					
				}
				else
				{
					if ((pr[n - 1] - pr[j])%3 == mo&& (pr[n - 1] - pr[j]) % 3 == (pr[j] - pr[i]) % 3)
					{
						l = i+1, r = j+1;
						break;
					}
				}
			}
			

		}
		cout << l << ' ' << r;el
	}

	return 0;
}
