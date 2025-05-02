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
int arr[5];

int   exp(int i,int ret) {
	// base case this is condition stop the recursion
	
	if (i>=5) {
		if (ret == 23)return 1;
		return 0;
	}
	// transition this what I do 
	int a = exp(i + 1, ret + arr[i]);
	int b = exp(i + 1, ret * arr[i]);
	int c = exp(i + 1, ret - arr[i]);
	return a + b + c;
}

int main()
{
	int t = 1;
	
	while ((cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4])&& (arr[0] != 0)) {
		sort(arr, arr + 5);
		

		bool f = 0;
		
		int ways=exp(1, arr[0]);
		
		
		if (ways >= 1) {
			cout << "Possible";
		}
		else {
			while (next_permutation(arr, arr + 5)) {
				 ways = exp(1, arr[0]);
				
				if (ways >= 1) {
					cout << "Possible";
					f = 1;
					break;
				}
			}
			if(!f)cout<< "Impossible";
		}
		el;
	}
}
