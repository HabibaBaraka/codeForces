/*
          "صلي على النبي"
    * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
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
//#define mod = 1e9 + 7;
#define N 100005
ll mod = 998244353;

ll fast_power(ll base, ll p) {
    ll res = 1;
    while (p != 0) {
        if (p % 2 == 0) {
            p /= 2;
            base *= base;   //base *= base%mod can ignore it already mod
            base %= mod;
        }
        else {
            p--;
            res *= base % mod;
            res %= mod;
        }
    }
    return res;
}


int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
   cin >> t;
    //SPF();
    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n),v2(n),ans;
        for(auto & it:v)cin >> it;
        for (auto& it : v2)cin >> it;
        int x = -1, y = -1, idx=-1, idx2=-1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > x)
            {
                x = v[i];
                idx = i;
            }
            if (v2[i] > y)
            {
                y = v2[i];
                idx2 = i;
            }
            int l = x, r = v2[i - idx];
            int l2 = y, r2 = v[i - idx2];
            ll val1, val2;
            if (l > l2)
            {
                val1 = (fast_power(2, l) + fast_power(2, r)) % mod;
                ans.push_back(val1);
            }
            else if (l2 > l)
            {
                val1 = (fast_power(2, l2) + fast_power(2, r2)) % mod;
                ans.push_back(val1);
            }
            else
            {
                ll mx = max(r, r2);
                val1 = (fast_power(2, mx) + fast_power(2, l2)) % mod;
                ans.push_back(val1);
            }

        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        
        el;
    }
}
