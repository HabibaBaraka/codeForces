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
		vector<ll>v(n),b,c;
		set<ll>a;
	    for(auto & it:v)cin >> it;
		sort(v.begin(), v.end());
		map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			a.insert(v[i]);
			mp[v[i]]++;
		}
		
		if (a.size() == n)
		{
			cout << Y<<0;
			el
		   
			cout << n;
			el;
			while (v.size() != 0)
			{
				cout << v.back()<<" ";
				v.pop_back();
			}
			el;
		}
		else
		{
			for (auto it : a)
			{
				if (c.size() + a.size() == n)break;
				if (mp[it]>1)c.push_back(it);
			}
			if (c.size() + a.size() == n)
			{
				cout << Y << a.size();
				el
					for (auto it : a)
					{
						cout << it << " ";
					}
				el;
				cout << c.size();
				el;
				while (c.size() != 0)
				{
					cout << c.back() << " ";
					c.pop_back();
				}
				el;
			}
			else cout << O;
		}
	}
	return 0;
}
