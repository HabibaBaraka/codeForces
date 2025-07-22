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
#define Y "YES"
#define O "NO"
#define el cout<<'\n';
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 100005
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
	

		string s;
		cin >> s;
		bool f1 = 0, f2 = 0;
		int n = s.size();
		for (int i = 0; i < n - 1; i++)
		{
			if (!f1&&s[i] == 'A' && s[i + 1] == 'B')
			{
				f1 = 1;
				i++;
			}
			else if (!f2&&f1&&s[i+1] == 'A' && s[i] == 'B')
			{
				f2 = 1;
				i++;
			}
		}
		if(f1&&f2)cout<<Y;
		else 
		{
		  
		f1=0,f2=0;
			for (int i = 0; i < n - 1; i++)
		{
		  if (!f2&&s[i+1] == 'A' && s[i] == 'B')
			{
				f2 = 1;
				i++;
			}
		else 	if (!f1&&f2&&s[i] == 'A' && s[i + 1] == 'B')
			{
				f1 = 1;
				i++;
			}
			
		}
		(f1 && f2) ? cout << Y : cout << O;
		}

	}

	return 0;
}
