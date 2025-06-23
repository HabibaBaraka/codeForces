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
ll mod = 1e9 + 7; ;

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		string a;
		int n, k;
		cin >> n >> k;
		cin >> a;
		if (k > n)
		{
			cout << "WRONGANSWER";
		}
		else if (k == n)
		{
			cout << a;
		}
		else
		{
			string ans = "";
			int fr[26] = { 0 };
		
			for (int i = 0; i < n; i++)
			{
				fr[a[i] - 'a']++;
			}
			char c; int mn = INT_MAX;
			for (int i = 0; i < 26; i++)
			{
				if (fr[i] < mn)
				{
					mn = fr[i], c = i + 'a';
				}
			}
		//	cout << mn << " " << c;
			if(mn>k)cout<< "WRONGANSWER";
			else
			{
				ans.assign(n, c);
				k -= mn;
				for (int i = 0; i < n; i++)
				{
					if (a[i] != c&&k>0)
					{
						ans[i] = a[i];
						k--;
					}
				}
			}
			cout << ans;
		}
		el;
	}
}
