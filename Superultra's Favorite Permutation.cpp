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

bool is_pr(int n)
{
	if (n % 2 == 0)return 0;
	for (int i = 3; i < n; i++)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		
		vector<int>v;
			
			for (int i = 2; i <= n; i += 2)
			{
				v.push_back(i);
			}
			int x = -1;
			for (int i = 1; i <= n; i += 2)
			{
				if (!is_pr(v.back() + i))
				{
					x = i;
				v.push_back(x);
					break;
				}
			}
			if (x == -1)cout << x;
			else {
				for (int i = 1; i <= n; i += 2)
				{
					if (i != x)v.push_back(i);
				}
				{
					for (auto it : v)
					{
						cout << it << " ";
					}
				}
			}
			el;
		
	
	}
}
