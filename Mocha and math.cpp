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
bool equal(vector<ll>& v) {
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i] != v[i + 1])return 0;
	}
	return 1;
}
int main()
{

	// until equal

	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = 0;
		vector<ll >v(n), v2;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		
		while (!equal(v)) {
			for (int i = 0; i < n - 1; i++) {
				if (v[i] > v[i + 1] || v[i] < v[i + 1]) {
					v[i] = v[i] & v[i + 1];
					v[i + 1] = v[i];
				}
			}
		}
		
		cout << v[0];
		cout << endl;
	}
}
