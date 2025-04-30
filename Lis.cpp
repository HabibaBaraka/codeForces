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
int mx = 1;
int  increas(int i=0,int last=0) {
	// base case this is condition stop the recursion
	if (i >= n)return 0;
	// transition this what I do 
	int leave = increas(i + 1, last);
	int take = 0;
	if (arr[i] > last) {
		last = arr[i];
		 take = increas(i + 1, arr[i])+1;
	}
	return max(leave, take);

}

int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		cout << increas();
		el;
	}
}
