// Only This Week.cpp 

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
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<map>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
const ll  mod = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 200;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	//sieve(N);
	while (t--) {
		int n;
		cin >> n;
		vector<ll>v(n);
		vector<pair<int,pair<int, int>>>a;
		map<int, int>mp;
		for (auto& it : v) { cin >> it; mp[it]++; }
		ll mx_E = 0;
		for (auto it : mp)
		{
			if (it.second > mp[mx_E])mx_E = it.first;
		}
		int idx = -1;
		for (int i = 0; i < n; i++)
		{
			if (v[i] == mx_E)idx = i;
		}
		for (int i = idx; i > 0; i--)
		{
			if (v[i] == v[i - 1])continue;
			int val = abs(v[i] - v[i - 1]);
			if (v[i] < v[i - 1])
			{
				a.push_back({ 2,{ i - 1,i } });
				v[i - 1] -= val;
			}
			else
			{
				a.push_back({ 1,{ i - 1,i } });
				v[i - 1] += val;
			}

		}
		for (int i = idx; i < n - 1; i++)
		{
			if (v[i] == v[i + 1])continue;
			int val = abs(v[i] - v[i + 1]);
			if (v[i] < v[i + 1])
			{
				a.push_back({ 2,{ i + 1,i} });
				v[i + 1] -= val;
			}
			else
			{
				a.push_back({ 1,{ i + 1,i} });
				v[i + 1] += val;
			}

		}
		cout << a.size(); el;
		for (auto it : a)
		{
			cout << it.first << " " << it.second.first + 1 << " " << it.second.second + 1; el;
		}
		
	}
	return 0;
}
