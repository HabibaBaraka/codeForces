/*
                        "صلي على النبي"
    * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
    * 
    * وَلَا تَيْأَسُوا مِن رَّوْحِ اللَّهِ ۖ إِنَّهُ لَا يَيْأَسُ مِن رَّوْحِ اللَّهِ إِلَّا الْقَوْمُ الْكَافِرُون   *
 
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<queue>
using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
//#define mod = 1e9 + 7;
#define N 100005
ll mod = 1e9+7;

int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
   cin >> t;
    //SPF();
    while (t--) {
        
        ll n;
        cin >> n;
        multiset<ll>s = { 0,0,0 };
        int cnt = 0;
        while (*s.begin() < n && *s.rbegin() < n)
        {
            auto it = s.begin();
            s.erase(it);
            s.insert(2 * (*s.begin()) + 1);
            cnt++;
        }
        /*
        for (auto it : s)
        {
            cout << it << " ";
        }*/
        cout << cnt+2;
        el;
    }
}
