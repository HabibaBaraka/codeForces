#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <numeric>
#include <fstream>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <map>
#include <set>
#include <cstdint>
#include <unordered_map>
#include <climits>
#include <cstring>
#include <bitset>
#define ll long long 
#define i128 __int128_t
#define pb push_back
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define el '\n';
#define temos int64_t
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ON(n, k) ((n) | (1 << k))
#define off(n, k) ((n) & (~(1 << k)))
#define ison(n, k) ((n >> k) & 1)
#define int long long 
#define all(x) x.begin(),x.end()
#define sz(a)  a.size()
#define pr priority_queue<int, vector<int>, greater<int>>
#include <climits>
using namespace std;

#define i64 long long  
const int N = 2e6 + 55;;
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
long long inver(long long x){
    return power(x, M - 2, M);
}
long long fact[N];
long long invfact[N];
void pre(){

fact[0] = 1;
//o(N)
for(int i = 1; i < N; i++){
    fact[i] = fact[i - 1] * i % M;
}
invfact[N - 1] = inver(fact[N - 1]);
//o(N)
for(int i = N - 2; i >= 0; i--){
    invfact[i] = invfact[i + 1] * (i + 1) % M;
}
}
//o(1)
long long p(long long n, long long r){
    return fact[n] * invfact[n - r] % M;
}
//o(1)
long long c(long long n, long long r){
    return fact[n] * invfact[n - r] % M * invfact[r] % M;
}

int32_t main() {
    pre();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int tc = 1;
    cin >> tc;
    

    
    while (tc--)
    {
         int n;
        cin >>n;
        int x;
        cin >> x;
        int o = 0, z = 0;
        while (n--)
        {
            int cn;
            cin >> cn;
            cn ? o++:z++;
        }
        
        ll sums = power(2,z,M)- 1;
        ll ans = sums;

        for (int i = x;i<=o; i += x)
        {
            ans = ((ans % M) + (c(o, i) % M)) % M;
           
            ans = ((ans % M) + ((((c(o, i) % M) * (sums % M)) % M)% M)) % M;
           
        }
        cout<<ans;
        cout << '\n';
}


    return 0;
}
