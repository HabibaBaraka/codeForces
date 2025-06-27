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
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;
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
		vector<int>a(n);
		int x = n;
		if (n == 3) { cout << -1;el; continue; }
		for (int i=0;i<n;i++)
		{
			if ( i +1!= x)
			{
				a[i] = x;
			}
			else
			{
				for (int j = 1; j <= x; j++)
				{
					a[i] = j;
					i++;
				}
			}
			x--;
		}
		for (auto it : a)
		{
			cout << it << " ";
		}
		el;
	}
}
