#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<climits>
#include<string>
#include<queue>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;
char a[6 + 1][6 + 1];
bool visit[10][10] = { 0 };
int n;
int sx, sy, ex, ey;
int maze(int x, int y) {
	// base case this is condition stop the recursion
	
	
	if ((x<1 || x>n || y<1 || y>n) || visit[x][y]||a[x][y]=='#') { return 1e5; }
	if (x == ex && y == ey) { return 0; }


	// transition this what I do 
	visit[x][y] = 1;
	int ch = maze(x, y + 1)+1;//right
	int ch2 = maze(x, y - 1)+1;//left
	int ch3= maze(x+1, y )+1;//down
	int ch4 = maze(x-1, y)+1;//up
	visit[x][y] = 0;
	return min({ ch , ch2 , ch3 , ch4 });
}


int main()
{
	int t = 1;
	//cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		cin >> sx >> sy >> ex >> ey;
	
		ll ans = maze(sx, sy);
	    ans>=1e5?cout<<-1:cout<<ans;
		el;
	}
}
