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
#define mod = 1e9 + 7;
#define N 100005
ll n, k;
bool can(ll x, vector<ll>&v)

{
    ll op = 0;
    int i = (n / 2);
    for (; i < n; i++)
    {
        if (v[i] < x)
        {
            op += (x - v[i]);

        }
        if (op > k)return 0;
    }
  
    return op<=k;
}
int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
   // cin >> t;
    //SPF();
    while (t--) {
       
        cin >> n >> k;
        vector<ll>v(n);
        for (auto& it : v)cin >> it;
        sort(v.begin(), v.end());
        ll l = v[n/2], r = 3e9, mid, ans = 0;
        
        
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (can(mid,v))
            {
                l = mid + 1;
              
                ans = mid;
            }

            else r = mid - 1;


        }
        cout << ans;
        el;
    }
}
