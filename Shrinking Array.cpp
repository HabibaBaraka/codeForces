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
		int n;
		cin >> n;
		vector<int>v(n);
		for (auto& it : v)cin >> it;
		int mn = INT_MAX;
		for (int i = 0; i < n; i++)
		{
		  if(i+1<n)
		  {
		    if(abs(v[i]-v[i+1])<=1){mn=0;break;}
		  }
			int x = v[i],x2=v[i]-1,x3=v[i]+1;
			for (int j = i; j < n - 1; j++)
			{
				if (j!=i) {
					int a, b;
					a = max(v[j], v[j + 1]), b = min(v[j], v[j + 1]);
					if (x <= a&& x >= b || x2 <= a && x2 >= b|| x3 <= a && x3 >= b)
					{
						int st = abs(j - i);
						if (st < mn)mn = st;
						
					}
				}
				
			}
		}
			for (int i = n-1; i >=0; i--)
		{
		  if(i-1>=0)
		  {
		    if(abs(v[i]-v[i-1])<=1){mn=0;break;}
		  }
			int x = v[i],x2=v[i]-1,x3=v[i]+1;
			for (int j = i; j >0; j--)
			{
				if (j!=i) {
					int a, b;
					a = max(v[j], v[j - 1]), b = min(v[j], v[j - 1]);
					if (x <= a&& x >= b || x2 <= a && x2 >= b|| x3 <= a && x3 >= b)
					{
						int st = abs(j - i);
						if (st < mn)mn = st;
						
					}
				}
				
			}
		}
	mn==INT_MAX?cout<<-1:	cout << mn;el;
		
	}
}
