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
ll n, m;
int arr[n];
ll mx = 0;
void  generate(int i) {
	// base case this is condition stop the recursion
	if (i < 0) {
		for (int o = 0; o < n; o++) {
			cout << arr[o];
		}
		el;
		return;
	}
	// transition this what I do 
	arr[i] = 0;
	generate(i - 1);
	arr[i] = 1;
	generate(i - 1);
}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n;
		generate(n-1);
		el;
	}
}
