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
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	cin >> t;
	vector<int>pre(N);
	for (int i = 1; i < N; i++)
	{
		pre[i] = i^pre[i - 1];
	}
	while (t--)
	{
		int mex, xo;
		cin >> mex >> xo;
		int ans = pre[mex-1];
		//cout << pre[0] << " " << pre[1] << " " << pre[2]; el;
		//cout << ans; el;
		if (ans == xo)cout << mex;
		else if ((ans ^ xo) == mex)cout << mex + 2;
		else cout << mex + 1;
		
		el;
	}
}
