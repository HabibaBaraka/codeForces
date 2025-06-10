#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
     long long x,y,n;
     cin>>x>>y>>n;
     long long m=n/x;
    // cout<<m<<endl;;
     
     if((m*x)+y<=n)cout<<(m*x)+y;
     else {
       m--;
       cout<<(m*x)+y;
     }
     cout<<'\n';
   }
    return 0;
}
