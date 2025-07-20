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
	ll t = 1;
	cin >> t;

	while (t--)
	{
		
		
	
		
		ll n, q;
		cin>>n;
		string s,ss="#";
		cin >> s;
		ss += s;
		cin >> q;
		ll x = 0;
		while (q--)
		{
			ll op, id;
			cin >> op >> id;
			if (op == 1)
			{
				x += id;
				x%=n;
			}
			else{
			  if(id+x==n)cout<<ss[id+x];
			else   cout << ss[(id + x) % n];
			el;
			  
			  
			}

		}

		
	}
}
/*
الحمدلله رب العالمين
*/
