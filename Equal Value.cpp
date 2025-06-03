/*
                        "صلي على النبي"
    * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
    * 
    * وَلَا تَيْأَسُوا مِن رَّوْحِ اللَّهِ ۖ إِنَّهُ لَا يَيْأَسُ مِن رَّوْحِ اللَّهِ إِلَّا الْقَوْمُ الْكَافِرُون   *
 
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
ll mod = 1e9+7;

int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
   cin >> t;
    //SPF();
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>v(n);
        for (auto& it : v)cin >> it;
        ll x = *min_element(v.begin(), v.end());
        ll y = *max_element(v.begin(), v.end());
        if (x==y)cout << 0;
        else
        {
            ll ans = (5e5 * 5e5)+10;
            for (int i = 0; i < n; i++)
            {
                    ll val = v[i];
                    ll op = 0;
                    int j = i;
                    while (j+1 < n && v[j+1] == val)j++;
                       
                        op += val * i;
                        op += val * (n - j - 1);
                        ans = min(ans, op);
                        i = j;
            }
            cout << ans;
        }
        el;
    }
}
