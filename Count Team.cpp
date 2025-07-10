
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
const int mod = 1e9 + 7;
const int N = 1e3 + 55;;
const int M = 1e9 + 7;
//o(lon(p))
ll power(ll n, ll p, ll mod) {
    if (p == 0)
        return 1;

    ll a = power(n, p / 2, mod);
    a = (a * a) % mod;

    if (p % 2 == 1)
        return (a * (n % mod)) % mod;
    else
        return a;
}
//o(log(M - 2))
ll inver(ll x) {
    return power(x, M - 2, M);
}
ll fact[N];
ll invfact[N];
void pre() {

    fact[0] = 1;
    //o(N)
    for (int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % M;
    }
    invfact[N - 1] = inver(fact[N - 1]);
    //o(N)
    for (int i = N - 2; i >= 0; i--) {
        invfact[i] = invfact[i + 1] * (i + 1) % M;
    }
}
//o(1)
ll p(ll n, ll r) {
    return fact[n] * invfact[n - r] % M;
}
//o(1)
ll c(int n, int r) {
    return fact[n] * invfact[n - r] % M * invfact[r] % M;
}
const int N2 = 1000 + 9;
ll dp[N2][N2];
int a[N2];
int n, m;

ll calc(int i, int s)
{
    // base case 
    if (s > m)return 0;
   if(i==n)return s==m;
   
    ll& ret = dp[i][s];
    if (~ret)return ret;
    // transition 
    ret = calc(i+1,s);
    for (int o = 1; o < min(m, a[i]); o++)
    {

        ret += (c(a[i], o) % mod) * (calc(i + 1, s + o) % mod);
        ret %= mod;
    }
    return ret;
}
int main()
{
    pre();
    int t = 1;
    // cin >> t;
    while (t--) {

        cin >> n >> m;
        memset(dp, -1, sizeof dp);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << calc(0, 0);
        // cout << c(3, 3);
        cout << '\n';
    }
}
