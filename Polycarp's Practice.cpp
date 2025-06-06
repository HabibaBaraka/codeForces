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


ll x;
bool large(ll n) {
    while (n > 0)
    {
        int d = n % 10;
        if (d != 5 && d != 6 && d != 7 && d != 8 && d != 9)return 0;
        n /= 10;
    }
    return 1;
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
        int n,k;
        cin >> n>>k;
        vector<ll>v(n), a;
       multiset<ll>mx;
        for (auto& it : v)cin >> it;
        a = v;
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        for (int i = 0; i < k; i++)
        {
            mx.insert(v[i]);
            ans += v[i];
        }
        cout << ans; el;
        int pre = 0;
        for (int i = 0; i < n; i++)
        {
            if (mx.count(a[i]))
            {
                if (mx.size() == 1)
                {
                    cout << n - pre << " "; break;
                }
                else  cout << i - pre + 1<<" ";
                mx.erase(mx.lower_bound(a[i]));
                pre = i + 1;
            }


        }



        el;
    }
}
