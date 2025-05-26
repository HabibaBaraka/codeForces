// bits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
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
#include<bitset>
ll   pr[200005][33] = { 0 };
int main()
{
    for (int i = 0; i <= 200001; i++) {
        for (int bit = 0; bit < 31; bit++) {
            if ((i >> bit) & 1)pr[i][bit]++;
            if (i > 0) {
                pr[i][bit] += pr[i - 1][bit];
            }
        }
    }

    int tc = 1;
    cin >> tc;
    while (tc--) {
        ll l, r;
        cin >> l >> r;
        ll n = r - l + 1;
        ll mx1sOnThisBit = 0;
        for (int bit = 0; bit < 31; bit++) {
            mx1sOnThisBit = max(mx1sOnThisBit, (pr[r][bit] - pr[l - 1][bit]));
        }
        cout << n - mx1sOnThisBit << '\n';

    }


}
