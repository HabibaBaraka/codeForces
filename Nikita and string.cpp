#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define int long long

/*   وَلَا تَيْأَسُوا مِن رَّوْحِ اللَّهِ ۖ إِنَّهُ لَا يَيْأَسُ مِن رَّوْحِ اللَّهِ إِلَّا الْقَوْمُ الْكَافِرُون   */

void ziad() {
    string s;
    cin >> s;
    int n = s.size();
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
        a += s[i] == 'a', b += s[i] == 'b';
    int c1 = 0, c2 = 0;
    int mn = n;
    for (int i = -1; i < n; i++) {
        int ca = 0, cb = 0;

        if (i != -1) {
            c1 += s[i] == 'a';
            c2 += s[i] == 'b';
        }
        for (int j = i + 1; j <= n; j++) {
            if (j != n) {
                ca += s[j] == 'a';
                cb += s[j] == 'b';
            }
            mn = min(mn, c2 + ca + b - (c2 + cb));
        }

    }

    cout << n - mn << el;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    if (fopen("inp.txt", "r")) {
        freopen("inp.txt", "r", stdin);
        freopen("outp.txt", "w", stdout);
    }
    int testcase = 1;
    // cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        ziad();
    }
    return 0;
}
