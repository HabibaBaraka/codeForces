
// Gym.cpp 
/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
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
        char c;
        cin >> c;
        string s;
        cin >> s;
        if (c == 'g')cout << 0<<'\n';
        else
        {
            stack<int>st;
            int fg = -1;
          
            int mx = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)st.push(i);
                else if (s[i] == 'g')
                {
                    while (!st.empty())
                    {
                        mx = max(mx, i - st.top());
                        st.pop();
                    }
                    if (fg == -1)fg = i;
                }
            }
            //cout << fg<<" ";
            while (!st.empty())
            {
              //  cout << st.top() + 1 << " ";
                mx = max((fg + 1) + (n - (st.top() + 1)), mx);
                st.pop();
            }
            cout << mx<<'\n';
        }
    }
}
                                                                      
