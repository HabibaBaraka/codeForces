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
const int N = 1e6 + 4;
const ll mod = 1e9 + 7;
int n, m,k;
string s;
ll dp[N];
ll test(int i=0)
{
	//base case 
	if (i > n)return 0;
	if (s[i] == 'C')return INT_MAX;
	ll& ret = dp[i];
	if (ret != -1)return ret;
	// transition
	ret = INT_MAX;
	if (s[i] == 'L') {
		for (int j = 1; j <= m; j++)
		{

			ret = min(ret, test(i + j));
		}
	}
	else if (s[i] == 'W')ret = min(ret, test(i + 1) + 1);
	return ret;
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
		
		cin >> n >> m >> k;
		string s2 = "L";
		dp[0] = -1;
		for (int i = 1; i <= n; i++)
		{
			dp[i] = -1; char c;
			cin >> c;
			s2 += c;
		}
		s = s2;
		 test()<=k?cout<<Y:cout<<O;
		
	}
}
