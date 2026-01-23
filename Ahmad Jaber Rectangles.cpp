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
		pair<ll, ll>p1, p2;
		cin >> p1.first >> p1.second >> p2.first >> p2.second;
		ll h;
		cin >> h;
		if (p1 > p2)swap(p1, p2);
		if (p2.first < p1.second)cout << (min(p1.second, p2.second) - p2.first) * h;
		else cout << 0;
	}
	return 0;
}
