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
        ll n, k;
        cin >> n >> k;
        string s; cin >> s;
        ll cnt = 0, z = 0;
        for (char c : s) {
            c == '1' ? cnt++ : z++;
        }
       
        ll p = n / 2;
        ll ov = p - k;
        z -= ov;
        cnt -= ov;
       // cout << z << " " << cnt;
        if (z>=0&&cnt>=0&&cnt % 2 == 0 && z % 2 == 0)cout << Y;
        else cout << O;
        el;
    }
}
