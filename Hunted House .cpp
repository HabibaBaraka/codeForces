#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main() 
{
  int t=1;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
  string s;
  cin>>s;
  long long cnt=0,cnt0=0;;
  vector<long long>v;
  reverse(s.begin(),s.end());
  for(int i=0;i<n;i++){
     if(s[i]=='1')cnt++;
   
    if(s[i]=='0'){v.push_back(cnt);cnt0++;}
   
  }
   for(int i=1;i<v.size();i++){
     v[i]+=v[i-1];
   }
    for(int i=cnt0;i<n;i++){
     v.push_back(-1);
   }
   for(auto it:v){
     cout<<it<<" ";
   }
    cout<<'\n';
  }
    return 0;
}
