#include<vector>
#include <iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include <unordered_set>
#include<iomanip>
#include<string>
#include<queue>
#include<climits>
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ll long long
#define ld long double
using namespace std;
int two(ll &n){
  int cnt=0;
  while(n%2==0){
    n/=2;
    cnt++;
  }
  return cnt;
}

int three(ll &n){
  int cnt=0;
  while(n%3==0){
    n/=3;
    cnt++;
  }
  return cnt;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
ll n;
cin>>n;
int cnt2=(two(n)),cnt3=three(n);
if(n!=1)cout<<-1;
else if(cnt2>cnt3)cout<<-1;
else if(cnt2==cnt3)cout<<cnt2;
else cout<<cnt3+(cnt3-cnt2);


	
		el;
	}
}
