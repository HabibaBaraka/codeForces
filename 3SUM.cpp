/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<map>
#include<algorithm>
#include<cmath>
#include<numeric>
#define ll long long
#define ld long double
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int tc = 1; cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		
		map<int, ll>mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[(x % 10)]++;
		}
		bool f = 0;
		//cout << mp[0] << " ";
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				for (int k = 0; k <= 9; k++) {
					ll valid = 0;
					if (i == j&&i == k && mp[i] >= 3)valid = i + j + k;
					else if(i==j&&i!=k&&mp[i]>=2&&mp[k]>0)valid = i + j + k;
					else if (i == k && i != j && mp[i] >= 2 && mp[j] > 0)valid = i + j + k;
					else if(j==k&&j!=i&&mp[j]>=2&&mp[i]>0)valid = i + j + k;
					else if(i!=j&&i!=k&&j!=k&&mp[j]>0&&mp[k]>0&&mp[i]>0)valid = i + j + k;
					if (valid % 10 == 3) {
						f = 1;
						break;
					}
				}
			}
		}
		if (f) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}
