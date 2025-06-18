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
	//cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		queue<int>q;
		
		for (int i = 0; i < 32; i++)
		{
			if ((n >> i) & 1)
			{
				q.push((1 << i));
				
			}
		}
	
		if (k < q.size()||k>n)cout << O;
		else
		{
			
			
			while (q.size() != k )
			{
				int po = q.front();
				q.pop();
				if (po == 1)
				{
					q.push(1);
				}
				else q.push(po / 2), q.push(po / 2);
			}
			cout << Y; el;
			while (!q.empty())
			{
				cout << q.front() << " ";
				q.pop();
			}
		}
		el;
	}
}
