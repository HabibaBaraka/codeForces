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
const int dx[] = { 0,0,1,-1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<pair<int,ll>>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 1e5 + 4;
const ll mod = 1e9 + 7;
const float pi = 3.14;


int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int>v(n),nx(n,n);
		for (auto& it : v)cin >> it;
		for (int i = n - 1; i >= 0; i--)
		{
			if (i == n - 1 && v[i] == 0)continue;
			if (v[i] == 1)nx[i] = i;
			else nx[i] = nx[i + 1];
		}
		
		int cnt = 0;
		for (int i = 0; i <= n-k; i++)
		{
			if (v[i] == 0)
			{
				if (nx[i] >= i + k)
				{
					cnt++;
					i += k;
		        }
			}
		}
		cout << cnt;
		el;
	}
}
/*
الحمدلله رب العالمين
*/
