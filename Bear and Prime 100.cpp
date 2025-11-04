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
#include<set>
#include<cmath>
#include<queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<numeric>
using namespace std;
#define ll long long
#define ld long double
#define Y "Y\n"
#define O "N\n"
#define el cout<<'\n';
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define Graph vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
const int N = 100000+9;
string ask(int x)
{
	cout  << x<< endl;
	cout.flush();
	string ret;
	cin >> ret;
	return ret;
}
bool isPr(int n)
{
	if (n == 2)return 1;
	if (n % 2 == 0)return 0;
	for (int i = 3; i * i <= n; i++)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		int cnt = 0;
		vector<int>v;
		for (int i = 2; i <= 50; i++)
		{
			if (isPr(i))v.push_back(i);
		}
		for (auto it : v)
		{
			if (ask(it) == "yes")
			{
				if ((it * it <= 100)&&ask(it * it) == "yes")
				{
					cout << "composite";
					return 0;
				}
				else cnt++;
			}
			if (cnt == 2)
			{
				cout << "composite";
				return 0;
			}
		}
		cout << "prime";
		
	}
	return 0;
}
