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
int op(string s, string n) {
	int cnt = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < n.size(); j += 3) {
			if (s[i] != n[j])cnt++;
		}
	}
	return cnt;
}
int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		string nice;
		ll mn =INT_MAX;
		vector<string>v = { "RGB","RBG","BRG","BGR","GBR","GRB" };
		for (int i = 0; i < 6; i++) {
			int cnt = op(v[i],s);
			if (cnt < mn) {
				mn = cnt;
				nice = v[i];
			}
		}
		while (nice.size() < n)nice += nice;
		cout << mn; el;
		nice.resize(n);
		cout << nice;
		el;
	}
}
