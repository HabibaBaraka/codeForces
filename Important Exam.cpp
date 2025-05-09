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
        int n,m;
        cin >> n>>m;
      
        char v[n+4][m+3];
        vector<int>a(m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j< m; j++) {
                cin >> v[i][j];
            }
        }
      
        ll ans = 0;
        for (int i = 0; i < m; i++)cin >> a[i];
        for (int i = 0; i < m; i++) {
            map<char, int>mp;
            for (int j = 0; j < n; j++) {
                mp[v[j][i]]++;
            }
            ans += max({ mp['A'],mp['B'] ,mp['C'] ,mp['D'] ,mp['E'] }) * a[i];
       }
        cout << ans;
        el;
    }
    
}
