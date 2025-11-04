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
ll ask(int x,int y)
{
	cout <<"? " << x << ' ' << y << endl;
	cout.flush();
	ll ret;
	cin >> ret;
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		ll total = 4 * 15 * 16 * 23 * 42;
		int act[4] = {};
		act[0] = ask(1, 2);
		act[1] = ask(1, 3);
		act[2] = ask(1, 4);
		act[3] = ask(1, 5);
		int a[6] = { 4,8,15,16,23,42 };
		do
		{
			if (a[0] * a[1] == act[0] && a[0] * a[2] == act[1] && a[0] * a[3] == act[2] && a[0] * a[4] == act[3])break;
		} while (next_permutation(a, a + 6));
		cout << "! ";
		for (auto it : a)cout << it << ' ';
	}
	return 0;
}
