
// Gym.cpp 
/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include <iostream>
#include <vector>
#include <cmath>
#include<set>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        vector<int>v;
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                for (int j = 0; j < 32; j++)
                {
                    if ((x >> j) & 1)s.insert(j);
                }
            }
        }
        
        if (s.empty())
        {
            cout << 0;

        }
        else
        {
            // mex of msb
            
            int mex = 0;
            while (s.count(mex))mex++;
            if ( (1 << mex) <= k)cout << 1;
            else 
            {
                if (2 <= k)cout << 2;
                else cout << -1;
            }
        }
        cout << '\n';
    }
}
                                                                      
