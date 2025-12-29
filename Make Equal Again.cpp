#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
const int N = 1e5;

int main()
{
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		vector<int>v(n);
		
		for (auto& it : v)cin >> it;
		int i = 1, j = n - 2;
		while (i < n && v[i] == v[i - 1])i++;
		while (j >= 0 && v[j] == v[j + 1])j--;
		if (j == -1 && i == n)cout << 0;
		else
		{
			int cnt1 = i;
			int cnt2 = n -( j+1);
			//cout << cnt1 << " " << cnt2;
			if (v[0] == v[n - 1])cout << n - (cnt1 + cnt2);
			else cout << n - max(cnt1, cnt2);
		}
		cout << '\n';
	}
	return 0;
}
