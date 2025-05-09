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


int main()
{
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll need = 0;
        vector<ll>v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            need += v[i];
        }
        
        (need % 2 == 0 && v[n - 1] <= need-v[n-1]) ? cout << Y : cout << O;
        el;
    }
    
}
