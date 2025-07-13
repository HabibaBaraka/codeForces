
// Gym.cpp 
/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include <iostream>
#include <vector>
#include <cmath>
#include<string>
#include<algorithm>
//const int N = 1001;
#define B_ct(n) __builtin_popcountll(n);
#define ll long long
using namespace std;
const int mod = 1e3 + 7;
const int N = 5e3 + 55;;
const int M = 1e9 + 7;
bool isPrime(ll a)
{
    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   
    int t = 1;
     //cin >> t;
    //freopen("prime.in", "r", stdin);
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        ll mx = 0;
        for (int mask = 1; mask < (1 << n); mask++)
        {
            string p = "";
            for (int i = 0; i < 32; i++)
            {
                if ((mask >> i) & 1)p += s[i];
            }
            ll pr = stoll(p);
            if (isPrime(pr))mx = max(mx, pr);
        }
        cout << mx;
    }
}
