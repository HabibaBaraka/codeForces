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
		int a, x, y;
		cin >> a >> x >> y; bool f = 0;
		if (abs(x - a) > abs(x - x) && abs(x - a) > abs(x - y))f = 1;
		else if (abs(y - a) > abs(y - y) && abs(y - a) > abs(y - x))f = 1;
		f ? cout << Y : cout << O;
		
	}
}
