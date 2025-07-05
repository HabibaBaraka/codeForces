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
const int N = 200 + 4;
const ll mod = 1e9 + 7;
int a[N];
int  b[N];
int  dp[N][N];
int n, m;
int sub(int i,int j)
{
	// base case 

	int & ret = dp[i][j];
	if (~ret)return ret;
	// transition
	ret=0;
	if(i<n) ret = max(ret,sub(i + 1,j) + a[i]);
	if(j<m) ret =  max(ret,sub(i,j+1)+b[j]);
	// cout<<a[i]<<" "<<b[j]<<" "<<ret;el
	 return ret;

}
int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin>>t;
	while (t--)
	{
	
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i]; 
		}
	
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		
		}
     memset(dp,-1,sizeof dp);
		
		cout << sub(0,0);el;
	}
}
