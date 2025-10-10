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
#define B_ct(n) __builtin_popcountll(n)
const ll  mod = 998244353;
const ll  mod2 = 1e9 + 7;
#define gr vector<vector<int>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int>mn(n), op(n);
		
		op[0] = s[0] == '(' ? 1 : -1;
		for (int i = 1; i < n; i++)
		{
			op[i] += op[i - 1];
			op[i] += (s[i] == '(' ? 1 : -1);
		}
		mn[n - 1] = op[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			mn[i] = min(mn[i + 1], op[i]);
			
		}
		
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			int open= (s[i] == ')' ? 2 : -2);
			int mnOp = mn[i] + open;
			open += op[n-1];
			if (open == 0 && mnOp == 0)cnt++;
			if (op[i] < 0)break;
		}
		
		cout << cnt;
	}
	return 0;
}
