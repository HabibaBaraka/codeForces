#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<climits>
#include<string>
#include<queue>
#include<set>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;
int n;
set<ll>s;
int arr[100];
void calc(int i,ll sum) {
	// base case this is condition stop the recursion
	if (i > n) {
		s.insert(sum);
		return;
	}
	// transition this what I do 
	calc(i + 1, sum);
	calc(i + 1, sum + arr[i]);
	
}


int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		calc(0, 0);
		cout << s.size()-1;
		//minus one for empty subset
		el;
	}
}
