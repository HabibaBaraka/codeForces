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
#define Y "YES"
#define O "NO"
#define el cout<<endl;
ll mod = 1e9 + 7;


int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	
	while (t--) 
	{
		int n;
		cin >> n;
		vector<int>a(n), b(n);
		for (auto& it : a)cin >> it;
		for (auto& it : b)cin >> it;
		vector<int>v,v2,v3;
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j > 0; j--)
			{
				if (a[j] < a[j - 1] )
				{
					swap(a[j], a[j - 1]);
					v.push_back(j);
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j > 0; j--)
			{
				if (b[j] < b[j - 1])
				{
					swap(b[j], b[j - 1]);
					v2.push_back(j);
				}
			}
		}

		
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= b[i]) {
				swap(a[i], b[i]), v3.push_back(i + 1);
			}
		}
		cout << v.size() + v2.size() + v3.size(); el;
		for (auto it : v)
		{
			cout << 1 << " " << it; el;
		}
		for (auto it : v2)
		{
			cout << 2 << " " << it; el;
		}
		for (auto it : v3)
		{
			cout << 3 << " " << it; el;
		}
		el;
	}
}
