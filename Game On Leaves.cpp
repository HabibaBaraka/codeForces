
//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#include<set>
using namespace std;
#define Graph vector<vector<long>>
#define  N  100005;
#define Y "Yes"
#define O "No"
const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };
const char dir[] = { 'R','L','D','U' };
long n, m;
bool vis[200005];
int ans;
vector<int>v(n);
bool pre = 0;
void dfs(int i,Graph &graph)
{
	vis[i] = 1;
	for (auto it : graph[i])
	{
		if (!vis[it])dfs(it, graph);
	}
}
void UDG(Graph& graph, int from, int to)
{
	
}
int main()
{
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n, x;
		cin >> n >> x;
		int v = 2 * (n - 1);
		int cnt = 0;
		n--;
		//root not included in removes
		while (v--)
		{
			int node;
			cin >> node;
			if (node == x)cnt++;
		}
		if (cnt <= 1)
		{
			// is leaf
			cout << "Ayush\n";
		}
		else if (n & 1)
		{
			cout << "Ayush\n";
		}
		else cout << "Ashish\n";
	}
}
