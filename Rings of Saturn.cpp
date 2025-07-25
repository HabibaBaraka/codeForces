//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 1000000
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<multiset<int>>s;
		vector<vector<int>>a(n, vector<int>(m));
		vector<vector<int>>b(n, vector<int>(m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int j = 0; j < m; j++)
		{
			multiset<int>st;
			for (int i = 0; i < n; i++)
			{
				st.insert(a[i][j]);
			}
			s.push_back(st);
		}

		for (int i = 0; i < n; i++)
		{
			b[i][0] = *s[0].begin();
			s[0].erase(s[0].begin());
		}

		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			bool f = 1;
			for (int j = 1; j < m; j++)
			{
				auto it=s[j].lower_bound(b[i][j - 1]);
				if (it == s[j].end())
				{
					f = 0;
					break;
				}
				else
				{
					b[i][j] = *it;
					s[j].erase(it);
				}
			}
			f ? cnt++ : cnt += 0;

		}
		cout << cnt; el;
	}
	return 0;
}
