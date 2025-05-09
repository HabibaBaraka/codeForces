#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<numeric>
#include<string>
#include<queue>
#include<set>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;

ll mod = 1e9 + 7;
int main()
{
    int t = 1;
    //cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll n;
        cin >> n;
        
        vector<ll>v = { x,y,y-x,-1*x,-1*y,-1*(y - x) };
        for (int i = 0; i < 6; i++) {
            v[i] = (v[i] + mod) % mod;
        }
        int idx = (n + 6) % 6;
        ll ans = v[idx==0?5:idx-1];
        cout << (ans + mod) % mod; el;
        
        el;
    }
    
}
