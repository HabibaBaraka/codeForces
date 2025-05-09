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
#include<climits>

#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;
ll mod = 1e9 + 7;
int sumD(ll n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll>v(n);
        multiset<int>sD;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = x;
            sD.insert(sumD(x)%3);
        }
        int ans=0;
        for (int i = 0; i < n; i++) {
            int mod = sumD(v[i])%3;
            if (mod == 0) {
                if (sD.size() >= 2) {
                   
                        auto it = sD.lower_bound(mod);
                        if (it != sD.end()&&*it==mod) {
                            sD.erase(it);
                            auto itt = sD.lower_bound(mod);
                            if (itt != sD.end()&&*itt==mod) {
                                sD.erase(itt);
                                ans++;
                            }
                        }
                    
                }
            }
            else {
                //1 2
                if (sD.size()>=2) {
                    auto it = sD.lower_bound(3 - mod);
                    if (it != sD.end() && *it == 3 - mod) {
                        sD.erase(it);
                        auto itt = sD.lower_bound(mod);
                        if (itt != sD.end() && *itt == mod) {
                            sD.erase(itt);
                            ans++;
                        }
                    }
                }
            }

        }
        cout << ans;
    }
    
}
