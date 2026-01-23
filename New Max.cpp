#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
const int N = 1e5;
#include<algorithm>
int a[101], n;

int main()
{
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		ll n, m, k;
		cin >> n >> m >> k;
		int cnt = 0;
		bool find = 0;
		while (n--)
		{
			ll x;
			cin >> x;
			if (x > m)cnt++;
			if (x == m)find = 1;
		}
		if (cnt == 0 && !find)cnt++;
		cnt > k ? cout << "NO" : cout << "YES";
	}
	return 0;
}
