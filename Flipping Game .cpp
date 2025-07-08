/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<map>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define G vector<vector<int>>
#define ll long long
#define ld long double
#define Y "Yes\n"
#define O "No\n"
#define el cout<<endl;
const int N = 500000 + 4;
const ll mod = 1e9 + 7;
ll dp[N];
int a[N],n,mx;
int freq[N];
ll boredom(int i)
{
	// base case
	if (i >mx)return 0;
	ll& ret = dp[i];
	if (ret != -1)return ret;
	// transition 
	return ret = max(boredom(i + 1), boredom(i + 2) + freq[i] *1ll* i);
}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	//cin >> t;

	while (t--)
	{
		
		cin >> n;
		int sum = 0;
		vector<int>v(n);
		for (auto& it : v) {
			 cin >> it;
			 sum += it;
		}
		int mx = sum;
		for (int i = 0; i < n;i++ )
		{
			int cnt0 = 0, cnt1 = 0;
			for (int j = i; j < n; j++)
			{
				if (v[j] == 1)cnt1++;
				else cnt0++;
				mx = max((sum - cnt1 + cnt0), mx);
			}
		}
		(sum==n)?cout<<n-1:cout<< mx;
	}
}
