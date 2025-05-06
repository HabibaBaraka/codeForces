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
		string s;
		cin >> s;
		n = s.size();
		map<char, int>mp;
		for (char c : s) {
			mp[c]++;
		}
		string rec = "nineteen";
		int mx = 0;
		if (mp['i'] >= 1 && mp['t'] >= 1 && mp['e'] >= 3 && mp['n'] >= 3) { mx++; 
		mp['n'] -= 3;
		mp['i']--;
		mp['t']--;
		mp['e'] -= 3;
		while (mp['i'] >= 1 && mp['t'] >= 1 && mp['e'] >= 3 && mp['n'] >= 2) {
			mp['n'] -= 2;
			mp['i']--;
			mp['t']--;
			mp['e'] -= 3;
			mx++;
		}
		}
		
		cout << mx;
		el;
	}
}
