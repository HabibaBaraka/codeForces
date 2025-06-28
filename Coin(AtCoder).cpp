/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
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
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
int n;
ld dp[3000][1600];
ld a[3000];
ld coin(int i,int cnt_tail)
{
	// base case 
	if (i == n)
	{
		return 1.0;
	
	}
	ld& ret = dp[i][cnt_tail];
	if (ret!=-1.0)return ret;
	// transition 
	ld head = coin(i + 1, cnt_tail) * a[i];
	ld tail = 0;
	if (cnt_tail < n / 2)tail = coin(i + 1, cnt_tail + 1) *(1 - a[i]);
	return ret = head + tail;
}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	//cin >> t;
	
	while (t--)
	{
	
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				 dp[i][j]=-1.0;
			}
		}
		cout << fixed<<setprecision (9)<< coin(0, 0);
		el;
	}
}
