// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<set>
#define ll long long
using namespace std;
int main()
{
	ll n; cin >> n;
	set<ll>s;
	for (int i = 0; i < n-1; i++)
	{
		ll x;
		cin >> x;
		s.insert(x);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!s.count(i))
		{
			cout << i;
			return 0;
		}
	}
}
