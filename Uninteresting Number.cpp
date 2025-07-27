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
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;

#define gr vector<vector<pair<int,int>>>

const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };
ll two = 0, three = 0;
ll sumD(string n)
{
	ll s = 0;
	for (char c : n)
	{
		s += c - '0';
		if (c == '2')two++;
		if (c == '3')three++;
	}
	return s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;

	while (t--) {
		two = 0, three = 0;
		string n;
		cin >> n;
		ll sum = sumD(n);
		if (sum % 9 == 0 || (sum + (two * 2) + (three * 6)) % 9 == 0)cout << Y;
		else
		{
			bool f = 0;
			for (int i = 0; i <= two; i++)
			{
				for (int j = 0; j <= three; j++)
				{
					if ((sum + ((2 * i) + (6 * j))) % 9 == 0)
					{
						f = 1;
						break;
					}
				}
				
			}
			f ? cout << Y : cout << O;
		}



	}
	return 0;
}
