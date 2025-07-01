/*
                  "صلي على النبي"
        * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<unordered_map>
#include<stack>
#include<cmath>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
int dp[N][6];
int a[N], n, k;
int  main()
{
    //freopen("input.txt", "r", stdin);    
    //freopen("output.txt", "w", stdout);  

    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;

    cin >> t;

    while (t--)
    {
        int m;
        cin >> m;
        string s; 
        cin >> s; int z = 0, on = 0;


        for (char c : s)
        {
            if (c == '1')z++;
        }

        if ((int)sqrt(m) * (int)sqrt(m) != m) {
            cout << O; continue;
        }
        int n = sqrt(m);
        char a[n+6][n+6];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
            {
                a[i][j] = s[(((i - 1) * n) + j) - 1];
            }
        }
        bool f = 1;

        for (int i = 1; i <= n; i++) {
            if (a[1][i] != '1')
            {
              f = 0;
            }
            else on++;
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i][1] != '1')
            {
               f = 0;
            }
            else on++;
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i][n] != '1')
            {
               f = 0;
            }
            else on++;
        }
        for (int i = 1; i <= n; i++) {
            if (a[i][n] != '1')
            {
               f = 0;
            }
            else on++;
        }
       
        f&& on == z ? cout << Y : cout << O;
           
        
    }
}
