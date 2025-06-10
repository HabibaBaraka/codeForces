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
int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
    cin >> t;
    //SPF();
   
    while (t--) {
        ll hi, di, hm, dm;
        cin >> hi >> di >> hm >> dm;
        int c;
        cin >> c;
        ll  w, a;
        cin >> w >> a;
        ll op1 = ceil(1.0 * hm / di);
        ll op2 = ceil(1.0 * hi / dm);
        if (op1 <= op2)cout << Y;
        else
        {
            bool f = 0;
            for (int i = 1; i <= c; i++)
            {
                ll nh = hi + ((c - i) * a);
                op2 = ceil(1.0 * nh / dm);
                ll nd = di + (i * w);
                op1 = ceil(1.0 * hm / nd);
                if (op1 <= op2)
                {
                    f = 1;
                    break;
                }
                 nh = hi + (i * a);
                op2 = ceil(1.0 * nh / dm);
                 nd = di + ((c - i) * w);
                op1 = ceil(1.0 * hm / nd);
                if (op1 <= op2)
                {
                    f = 1;
                    break;
                }

            }
            
            f ? cout << Y : cout << O;
        }

        el;
    }
}
