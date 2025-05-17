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
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
ll mod = 1e9 + 7;
int SumInput() {
	int sum=0;
	for (int i = 0; i < 3; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	return sum;
}
int main()

{
	//freopen("divisible.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	//cin >> t;
	//SPF();
	while (t--) {
		
		
		int cups = SumInput();
		int medal = SumInput();
		int n;
		cin >> n;
		if (ceil(cups / 5.0) + ceil(medal / 10.0) <= n)cout << Y;else  cout << O;
		el;
	}
}
