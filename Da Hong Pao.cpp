// Gym.cpp 
/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include <iostream>
#include <vector>
#include <cmath>
#include<cstring>
#include<algorithm>
//const int N = 1001;
#define B_ct(n) __builtin_popcountll(n);
#define ll long long
using namespace std;
const int mod = 1e3 + 7;
const int N = 5e3 + 55;;
const int M = 1e9 + 7;
ll dp[N][N];
int a[N];
int n;
ll calc(int i=0, int j=n-1,int coff=1)
{
    // base case 
    if (j < i)return 0;
    ll& ret = dp[i][j];
    if (~ret)return ret;
    // transition 
    ret = max(calc(i + 1, j,coff+1) + a[i]*coff, calc(i, j - 1,coff+1) + a[j]*coff);
    return ret;
}

int main()
{
   
    int t = 1;
    // cin >> t;
    while (t--) {

        memset(dp, -1, sizeof dp);
        cin >> n;
       
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << calc();
        cout << '\n';
    }
}
