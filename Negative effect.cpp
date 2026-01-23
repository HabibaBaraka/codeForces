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
		int n, m;
		cin >> n >> m;
		vector<ll>v(n),p(n),suff(n),ans;
		for (auto& it : v)cin >> it;
		p[0] = v[0];
		for (int i = 1;i < n;i++)p[i] = p[i - 1] + v[i];
		suff[n - 1] = v[n - 1];
		for (int i = n - 2;i >= 0;i--)suff[i] = suff[i + 1] + v[i];
		
		for (int i = 0;i < n;i++)
		{
			if (i == 0)n > 1 ? ans.push_back(suff[i + 1]) : ans.push_back(m);
			else if (i == n - 1)n > 1 ? ans.push_back(p[i - 1]) : ans.push_back(m);
			else ans.push_back(max({ p[i - 1], suff[i + 1], p[i - 1]+ suff[i + 1]+m }));
		}
		for (auto it : ans)cout << it << ' ';
	}
	return 0;
}
