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
        int n, k;
        cin >> n >> k;
        vector<ll>l(n), r(n),v(n);
        ll gl = 0, gr = 0;
        for (auto& it : l)cin >> it;
        for (auto& it : r)cin >> it;
     
        ll wrtcase = 0;

        for (int i = 0; i < n; i++) {
            wrtcase += max(l[i], r[i]);
            v.push_back(min(l[i], r[i]));
        }
        sort(v.rbegin(), v.rend());

        for (int i = 0; i < k-1; i++) {
            wrtcase += v[i];
        }
       
        cout << wrtcase + 1;
        el;
    }
}
