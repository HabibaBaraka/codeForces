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
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 1e9 + 7;
const int N = 3e5 + 4;
int dp[N][6];
int a[N],n,k;
int  main()
{
    //freopen("input.txt", "r", stdin);    
    //freopen("output.txt", "w", stdout);  

    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;

    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b % 2 == 1)
        {
            if (a >= 2)a -= 2;
            else {
                cout << O; continue;;
            }
            if (a % 2 == 0)cout << Y;
            else cout << O;
            
        }
        else if (a % 2 == 0)cout << Y;
        else cout << O;
     
    }
}
