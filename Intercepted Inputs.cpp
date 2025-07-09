/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<int>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 500 + 4;
const ll mod = 1e9 + 7;
int n, s;
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;
		int rec = k - 2;
		
		multiset<int>s;
		while (k--)
		{
			int x;
			cin >> x;
			s.insert(x);

		}
		int n=-1, m=-1;
		for (auto it : s)
		{
			auto i = s.lower_bound(rec / it);
			if (i != s.end() && *i * it == rec)
			{
				n = it;
				m = *i;
				break;
			}
		}
		cout << n <<" "<< m;
		el;
	
	}
}
