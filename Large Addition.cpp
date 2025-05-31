/*
          "صلي على النبي"
    * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
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
#define mod = 1e9 + 7;
#define N 100005


ll x;
bool large(ll n) {
  if(  n == 0) return 0;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 5 && d != 6 && d != 7 && d != 8 && d != 9)return 0;
        n /= 10;
    }
    return 1;
}
int nD(ll n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;;
}
int main()

{

    //pre();
    //freopen("divisible.in", "r", stdin);
    ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
    int t = 1;
    cin >> t;
    //SPF();
    while (t--) {
        string s;
        cin >> s;
        vector<int>v = { 5,6,7,8,9 };
        string sum = "";
        for (int i = 1; i < s.size(); i++)
        {
            int d = s[i] - '0';
            auto it = (lower_bound(v.begin(), v.end(), d));

            if (*it == d&&i==s.size()-1)
            {
                it++;
                (it != v.end()) ? sum += *it + '0' : sum += '0';
            }
            else  sum += *it + '0';
        }





        ll n = stoll(s);
        ll x = stoll(sum);
        ll y = n - x;
      //  cout << x << " " << y;
     
        if (y < 0)cout << O;
        else
        {
            bool f;
            nD(x) == nD(y) ? f = 1 : f = 0;
            large(y) &&large(x)&&f? cout << Y : cout << O;
        }
        el;
    }
}
