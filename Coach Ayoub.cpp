#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
const int N = 1e5;
#include<algorithm>
int a[101],n;

int main()
{
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		ll n, a, b, s;
		cin >> n >> a >> b >> s;
		ll mn = (n - 1) * a + b;
		ll mx = (n - 1) * b + a;
		if (s >= mn && s <= mx)cout << "YES";
		else cout << "NO";
	}
	return 0;
}
