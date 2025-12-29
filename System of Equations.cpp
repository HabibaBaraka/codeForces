#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
const int N = 1e5;

int main()
{
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for (int i = 0;i <= max(n,m);i++)
		{
			for (int j = 0;j <= max(n, m);j++)
			{
				if (i * i + j == n && j * j + i == m)cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}
