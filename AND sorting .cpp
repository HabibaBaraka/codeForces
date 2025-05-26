/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
// BIT MASKS
#include<vector>
#include <iostream>
#include<map>
#include<algorithm>
#include<cmath>
#define ll long long
#define ld long double
using namespace std;
int main()
{

	// common ones bit in non sorted element

	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = 0;
		vector<int >v(n),v2;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		
		for (int i = 0; i < n; i++) {
			if (v[i] != i) {
				
				v2.push_back(v[i]);
			}
		}
		int k = v2[0];
		for (int i = 1; i < v2.size(); i++) {
			k&= v2[i];
		}
		
		cout << max(k, ans);

		cout << endl;
	}
}
