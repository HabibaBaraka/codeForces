// New Level===New Part.cpp 
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
		int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n), ans;
		for (auto& it : v)cin >> it;
		ans.push_back(v.back());
		string s = "";
		int x = 0;
		int l = 0, r = n - 1;
		while (l <= r)
		{
			if (x >= 2)
			{
				if (ans[ans.size() - 1] > ans[ans.size() - 2])
				{
					if (v[r] < ans[ans.size() - 1])
					{
						ans.push_back(v[r]);
						s.push_back('R');
						r--;
						x = 1;
					}
					else if (v[l] < ans[ans.size() - 1])
					{
						ans.push_back(v[l]);
						l++;
						s.push_back('L');
						x = 1;
					}
					else
					{
						int mx = max(v[l], v[r]);
						if (v[l] == mx)
						{
							ans.push_back(v[l]);
							l++;
							s.push_back('L');
						}
						else
						{
							ans.push_back(v[r]);
							s.push_back('R');
							r--;
						}
						x++;
					}
				}
				else
				{
					if (v[r] > ans[ans.size() - 1])
					{
						ans.push_back(v[r]);
						s.push_back('R');
						r--;
						x = 1;
					}
					else if (v[l] > ans[ans.size() - 1])
					{
						ans.push_back(v[l]);
						l++;
						s.push_back('L');
						x = 1;
					}
					else
					{
						int mn = min(v[l], v[r]);
						if (mn == v[l])
						{
							ans.push_back(v[l]);
							l++;
							s.push_back('L');
						}
						else
						{
							ans.push_back(v[r]);
							s.push_back('R');
							r--;
						}
						x++;
					}
				}

			}
			else
			{

				int mx = max(v[l], v[r]);
				if (v[l] == mx)
				{
					ans.push_back(v[l]);
					l++;
					s.push_back('L');
				}
				else
				{
					ans.push_back(v[r]);
					s.push_back('R');
					r--;
				}
				x++;
			}

		}

		cout << s;
		el;
	}
	return 0;
}
