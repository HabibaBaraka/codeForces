/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<string>
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
const float pi = 3.14;
int main()
{
freopen("clock.in", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;
  	cin >> t;

	while (t--)
	{
		 string s,e;
		 cin >> s >> e;
		 int t1=-1, t2=-1;
		 if (s[0] > '0')
		 {
			 string st = "";
			 st += s[0];
			 st += s[1];
			 t1 = stoi(st);
		 }
		 else t1 = s[1] - '0';
		 if (e[0] > '0')
		 {
			 string st = "";
			 st += e[0];
			 st += e[1];
			 t2 = stoi(st);
		 }
		 else t2 = e[1] - '0';
		// cout << t1 << " " << t2; el;
		 int ans = 0;
		 int recH = t2 - t1;
		 if (recH < 0)recH += 12;
		// cout << recH; el;
		 ans += recH * 360;
		// cout << ans; el;
		 int m1=-1, m2=-1;
		 if (s[3] > '0')
		 {
			 string st = "";
			 st += s[3];
			 st += s[4];
			 m1 = stoi(st);
		 }
		 else m1 = s[4] - '0';
		 if (e[3] > '0')
		 {
			 string st = "";
			 st += e[3];
			 st += e[4];
			 m2 = stoi(st);
		 }
		 else m2 = e[4] - '0';
		 if (m1 > m2)
		 {
			 int mni = (m1 - m2)*6;
			 
		//	 cout << mni; el;
			 ans -= mni;
			 if(ans<0)ans+=(12*360);
		 }
		 else ans += (m2 - m1) *6;
		 
		 cout << ans; el;
	}
}
