
// Gym.cpp 
/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include <iostream>
#include <vector>
#include <cmath>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll m;
        cin >> m;
        vector<ll>v(n);
        for (auto& it : v)cin >> it;
        sort(v.begin(), v.end());
        int l = 0, r = 0;
        ll sum = 0;
        ll mx = 0;
        while (l < n)
        {
            while (r < n && v[r] - v[l] < 2 && sum + v[r] <= m)
            {
                sum += v[r];
                r++;
            }
            if (sum <= m)mx = max(sum, mx);

            sum -= v[l];
            l++;

        }
        cout << mx << "\n";
    }

}
                                                                      
