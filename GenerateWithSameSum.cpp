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

set<string>sub;
int arr[111];
void  generate(int i = 0, int sum = 0, int sum2 = 0) {
	// base case this is condition stop the recursion
	if (i >= n) {
		if (sum == sum2) {
			for (int j = 0; j < n; j++) {
				cout << arr[j];
			}
			el;
		}
		return;
	}
	
	// transition this what I do 
	
		
arr[i] = 0;
generate(i + 1, sum, sum2);
arr[i] = 1;
if (i < n / 2) generate(i + 1, sum + arr[i], sum2);
else generate(i + 1, sum , sum2 + arr[i]);
	
	
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		cin >> n;
		n *= 2;

		generate();
		el;
	}
}
// 
