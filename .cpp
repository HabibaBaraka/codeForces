//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<vector>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 509
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{

	int t = 1;
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n>>k ;
		
		deque<int>dq(n);
		
		for (auto& it : dq)cin >> it;
		
		while(k>0&&!dq.empty())
		{
			int x = dq.front();
			int o = 2 * x - 1;
			if (dq.size() == 1)o = dq.front();
			if (o<= k)
			{
				k -=o;
				dq.pop_front();
				int op= x-1;
				if(k>0)op++,k--;
				while (!dq.empty() && op >= dq.back())
				{
					op -= dq.back(); dq.pop_back();
				}
				if (!dq.empty() && dq.back() > op)dq.back() -= op;
		    }
			else
			{
				int op = k / 2;
				
				dq.front() -= k/2;
				if (k & 1ll)dq.front()--;
				k = 0;
				while (!dq.empty()&&op >= dq.back())
				{
					op -= dq.back(); dq.pop_back();
				}
				if (!dq.empty() && dq.back() > op)dq.back() -= op;
			}
			//for (auto it : dq)cout << it << " "; el;
		}
		cout << n - dq.size(); el;
		
	}

	return 0;
}
/*
الحمدلله رب العالمين
*/
