/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
ll mod = 1e9 + 7;
vector<int>v = { 1 ,2 ,3 };



int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>v(n+1),fA(n+1);
		unordered_map<ll,ll>mp;
		for (int i = 1; i <= n;i++)cin >> v[i];
		int XOR = 0;
		fA[0] = -1;
		mp[0] = 0;
		for (int i=1;i<=n;i++)
		{
			
			XOR ^= v[i];
			fA[i] = fA[i - 1];
			if (mp.count(XOR))
			{
				fA[i] = max(fA[i], mp[XOR] + 1);
			}
			mp[XOR] = i;
		}
		int q;
		cin >> q;
		while (q--)
		{
			int l, r;
			cin >> l >> r;
		
			 fA[r]>=l ? cout << Y : cout << O;

		}
		el;
	}
}
