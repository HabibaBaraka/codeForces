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
bool can(ll n) {
    return (n * (n + 1) / 2 >= abs(x));
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
        multiset<ll>r,c;
        vector<pair<ll, ll>>v;
        for (int i = 0; i < n; i++) {
            ll x, y;
            cin >> x >> y;
            r.insert(x);
            c.insert(y);
            v.push_back({ x,y });
        }
        if (n == 1)cout << 1;
        else {
            ll mn = 1e9 * 1e9;

            for (int i = 0; i < n; i++) {
                ll x = v[i].first, y = v[i].second;
                // cout << x << " " << y; el;
                r.erase(r.lower_bound(x));
                c.erase(c.lower_bound(y));

                ll area = (*r.rbegin() - *r.begin() + 1) * (*c.rbegin() - *c.begin() + 1);
                if (area == (n - 1)) {

                    area = (*r.rbegin() - *r.begin() + 2) * (*c.rbegin() - *c.begin() + 1);
                    mn = min(area, mn);
                    area = (*r.rbegin() - *r.begin() + 1) * (*c.rbegin() - *c.begin() + 2);
                    mn = min(mn, area);
                }
                else
                {
                    mn = min(area, mn);
                }
                r.insert(x);
                c.insert(y);
                // cout << mn; el;
            }

            cout << mn;
        }
        el;
    }
}
