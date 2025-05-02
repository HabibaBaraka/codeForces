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
ll m;

bool f = 0;
void  possible(int n) {
	// base case this is condition stop the recursion
	if (n<m) {
		return ;
	}
	if (n == m) {
		f = 1; return;
	}

	// transition this what I do 
	if (n % 3 != 0)return;
	possible(n / 3);
	possible(2* (n / 3));
	
	
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n>>m;
		f = 0;
		possible(n);
		if (f)cout << Y; else cout << O;
		el;
	}
}
// 
