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
const int N = 500 + 4;
const ll mod = 1e9 + 7;

int main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	int fib[11]={};
	fib[1] = 1, fib[2] = 2;
	for (int i = 3; i <= 10; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		string s = "";
		//cout << fib[n] << " " << fib[n - 1];el
		while (m--)
		{
			int a, b, c;
			cin >> a >> b >> c;
			
			if (max({ a, b, c }) >= fib[n] + fib[n - 1]&&min({a,b,c})>=fib[n])s += '1';
			else s += '0';
		}
		cout << s; el;
	}
}
