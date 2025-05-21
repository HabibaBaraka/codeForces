/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 1000



int main()

{
	
	//pre();
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	//SPF();
	while (t--) {
		vector<int>axis;
		int n;
		cin >> n;
		char almostRec[400][400];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
		     	cin>>almostRec[i][j];
				if (almostRec[i][j] == '*') {
					axis.push_back(i);
					axis.push_back(j);
				}
			}
		}
		// we have 3 cases
		if (axis[0] == axis[2]) {
			if (axis[0] == 0) {
				almostRec[axis[0]+1][axis[1]] = '*';
				almostRec[axis[2] + 1][axis[3]] = '*';
			}
			else {
				almostRec[axis[0] - 1][axis[1]] = '*';
				almostRec[axis[2] - 1][axis[3]] = '*';
			}
		}
		else if (axis[1] == axis[3]) {
			if (axis[1] == 0) {
				almostRec[axis[0]][axis[1]+1] = '*';
				almostRec[axis[2]][axis[3]+1] = '*';
			}
			else {
				almostRec[axis[0]][axis[1]-1] = '*';
				almostRec[axis[2]][axis[3]-1] = '*';
			}
		}
		else {
			almostRec[axis[0]][axis[3]] = '*';
			almostRec[axis[2]][axis[1]] = '*';
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << almostRec[i][j];
			}
			el;
		}


	}
}
