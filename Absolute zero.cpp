#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
#define ll long long
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<ll>v(n), ans;

        ll sum = 0;
        bool e = 0, o = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] & 1)o = 1;
            else e = 1;
            sum += v[i];
        }
        if (e && o)cout << -1;
        else {
            ll mx = *max_element(v.begin(), v.end());
            while (mx/2 > 0) {
                for (int i = 0; i < n; i++) {
                    v[i] = abs(v[i] - (mx / 2));

                }
                ans.push_back(mx/2);
                mx= *max_element(v.begin(), v.end());
            }
           
            bool f = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] != 0)f = 1;
            }
           
            if (f)ans.push_back(1);
            if ( ans.size() <= 40) {
                cout << ans.size() << '\n';
                for (auto it : ans) {
                    cout << it << " ";
                }
            }
            else cout << -1;
        }
        
        cout << '\n';
    }

    return 0;
}
