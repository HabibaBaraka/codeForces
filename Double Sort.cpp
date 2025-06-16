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
#define Y "Yes"
#define O "No"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
#define gr vector<vector<int>>
bool vis[int(1e5)];
bool sorted(vector<int>& v)
{
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] < v[i - 1])return 0;
	}
	return 1;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n), b(n), sa, sb;
		for (auto& it : a)cin >> it;
		for (auto& it : b)cin >> it;
		int cnt = 0;
		sa = a; sb = b;
		vector<pair<int, int>>v;
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j > 0; j--)
			{

				if (a[j] < a[j - 1] || (a[j] == a[j - 1] && b[j] < b[j - 1]))
				{
					v.push_back({ j + 1,j });
					swap(a[j], a[j - 1]);
					swap(b[j], b[j - 1]);
				}
			}
		}
		if (!sorted(a) || !sorted(b)) {
			cout << -1;
			el;
		}
		else {
			cout << v.size(); el;
			for (auto it : v)
			{
				cout << it.first << " " << it.second; el;
			}
		}
	}

	return 0;
}
