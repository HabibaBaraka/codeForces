#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<iomanip>
#include<string>
#include<queue>
#include<set>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;
ll n;
string s;
set<string>sub;
void  generate(int i = 0,string st = "") {
	// base case this is condition stop the recursion
	if (i >= s.size()) {
		sub.insert(st);
		return;
	}
	// transition this what I do 
	generate(i + 1, st + s[i]);
	generate(i + 1, st);

}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {


		cin >> s;
		n = s.size();
		generate();
		for (auto it : sub) {
			cout << it;
			el;
		}
		el;
	}
}
// 
