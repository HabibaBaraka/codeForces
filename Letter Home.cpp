/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<set>
#include<queue>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
ll mod = 1e9 + 7;

int sumd(int n)
{
	int s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
void repeat(string s, int x)
{
	while (x--)
	{
		cout << s; el
	}

}
bool can(ll s, vector<pair<ll, ll>>& v)
{
	for (auto it : v)
	{
		if (s<it.first || s>it.second)return 0;
	}
	return 1;
}
int main()

{

	//freopen("experience.in", "r", stdin);
	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
	cin >> t;
	
	while (t--) 
	{
		int n, x;
		cin >> n >> x;
		vector<int>v(n);
		for (auto& it : v)cin >> it;
		int mx = *max_element(v.begin(), v.end());
		int mn = *min_element(v.begin(), v.end());
		if (x < mn)
		{
			cout << mx - x;
		}
		else if (x > mx)
		{
			cout << x - mn;
		}
		else {
			int w1, w2;
			w1 = (x - mn + mx - mn);
			w2 = (mx - x + mx - mn);
			cout << min(w1, w2);
		} el;
	}
}
