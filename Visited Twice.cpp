//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
// Graph,DFS.cpp 
#include <iostream>
#include<vector>
#define ll long long
using namespace std;
#define Graph vector<vector<int>>
#include<cstring>
const int dx[] = { 0,0,-1,1 };
const int dy[] = { 1,-1,0,0 };
//const string dir[] = { "right","left","forth" };
int n;
bool vis[10009];
int freq[20002] = { 0 };
void  dfs(int i, Graph& graph,int&nauty)

{

	
	if (vis[i]&&nauty==-1)
	{
		nauty = i + 1;
	}
	vis[i]=1;
	for (auto it : graph[i])
	{
	  if(!vis[it]) dfs(it, graph,nauty);
	  else if(nauty==-1)nauty=it+1;
	}
}

int main()
{
	int n;
	cin >> n;
	Graph g(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		g[i].push_back(x - 1);
	}
	vector<int>ans;
	
	for (int i = 0; i < n; i++)
	{
	    memset(vis, 0, sizeof vis);
	 
		int nauty = -1;
		dfs(i, g, nauty);
		nauty == -1 ? ans.push_back(i + 1) : ans.push_back(nauty);
	}
	for (auto it : ans)
	{
		cout << it << " ";
	}
}
