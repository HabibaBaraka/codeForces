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


void  generate(string s="",int i = 0, int sum = 0, int sum2 = 0) {
	// base case this is condition stop the recursion
	if (i >= n) {
		if (sum == sum2) {
			cout << s;
			el;
		}
		return;
	}
	
	// transition this what I do 
	
		

generate(s+'0', i + 1, sum, sum2);

if (i < n / 2) generate(s+'1', i + 1, sum + 1, sum2);
else generate(s+'1', i + 1, sum, sum2 + 1);
	
	
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
