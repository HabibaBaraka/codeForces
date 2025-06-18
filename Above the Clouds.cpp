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
		bool f = 0;
		string s;
		int n;
		cin >> n;
		cin >> s;
		
		int freq[27] = { 0 };
		for (char c : s)
		{
			freq[c - 'a']++;

		}
		for (char c : s)
		{
			if (freq[c - 'a'] > 1)
			{
				if (freq[c - 'a'] == 2 && s[0] == s[n - 1] && s[0] == c)continue;
				
				else { f = 1; break; }
				
			}
		}
		f ? cout << Y : cout << O;

		el;
	}
}
