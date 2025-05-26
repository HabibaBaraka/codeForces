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

int main()
{
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        int ans = 1;
        for (int i = 1; i <= min(n, 32ll); i++)
        {
            for (int j = 0; j + i - 1 < n; j++)
            {
                int l = j, r = j + i - 1;
                string res = "";
                int OR = 0;
                int sum = 0;
                for (int k = l; k <= r; k++) { res += s[k], OR |= v[k], sum += v[k]; }
                string temp = res;
                reverse(temp.begin(), temp.end());
                if (temp == res && OR == sum) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans;
    }


}
