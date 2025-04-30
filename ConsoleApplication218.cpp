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
ll arr[11111];
ll mx = 0;
ll  equation(int i,ll sum) {
	// base case this is condition stop the recursion
	if (i >= n) {
		if (sum == 0)return 0;
		else return INT_MAX;
	}
	
	// transition this what I do 
	ll val = arr[i], val2 = -1*arr[i];
	if (val < 0)swap(val, val2);
	ll plus = equation(i + 1, sum + val)+(arr[i]<0);
	ll minus = equation(i + 1, sum + val2)+(arr[i]>0);
	return min(plus, minus);
}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n;
		cin >> arr[0];
		for (int i = 1; i < n; i++) {
			char x;
			cin >> x;
			cin >>arr[i];
			if (x == '-')arr[i] *= -1;
			
		}
		ll ans=equation(1, arr[0]);
		if (ans >20)cout << -1;
		else cout << ans;
		//cout << "llll";
		el;
	}
}