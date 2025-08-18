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
	//cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s, e;
		cin >> s >> e;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int a = s[i] - '0', b = e[i] - '0';
			int op = 0,op2=0;
			int x = a;
			while (x != b)
			{
				if (x == 0)x = 9;
				else x--;
				op++;
				
			}
			x = a;
			while (x != b)
			{
				if (x == 9)x = 0;
				else x++;
				op2++;

			}
			
			ans += min(op, op2);
		}cout << ans;
	}
	return 0;
}
