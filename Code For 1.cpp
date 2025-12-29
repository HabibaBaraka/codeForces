#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll clcLen(ll n)
{
  if(n==0)return 1;
  ll len=1;
  while(n>1)
  {
    len=2*len+1;
    n/=2;
  }
  return len;
}
ll ones(ll n,ll pos,ll len)
{
  // base case 
  if(pos==0)return 0;
  ll mid=(len+1)/2;
  ll ans=0;
  if(pos>=len)return n;
  // transition 
  if(pos==mid)ans=n/2+(n&1ll);
  else if(pos<mid) ans=ones(n/2,pos,len/2);
  else 
  {
    ll diff=pos-mid;
    ans=n/2+(n&1ll)+ones(n/2,diff,len/2);
  }
  return ans;
}
int main()
{
	ll n,l,r;
	cin>>n>>l>>r;
	ll len=clcLen(n);
//	cout<<len;
	cout<<ones(n,r,len)-ones(n,l-1,len);
	
return 0;
}
