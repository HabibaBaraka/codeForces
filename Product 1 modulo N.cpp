#include<vector>
#include <iostream>
#include<numeric>
#include<algorithm>
#include<cmath>
#define ll long long
#define ld long double
using namespace std;
vector<ll>prime_factor(ll n) {
	vector<ll>fact;
	for (ll i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			fact.push_back(i);
			n /= i;
		}
	}
	if (n != 1) {
		fact.push_back(n);
	}
	return fact;
}
int pr(ll n) {
int cnt=0;
	for (ll i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			cnt++;
			n /= i;
		}
	}
	if (n != 1) {
	cnt++;
	}
	return cnt;
}




int main()
{
	ll n; cin >> n;
	vector<ll>v;
	ll ans=1;
for(int i=1;i<n;i++){
   if(gcd(n,i)==1){
       v.push_back(i);
       
   }
}
	for(int i=0;i<v.size();i++){
	   ans=(ans*v[i])%n;
	}
	
	
if(ans%n==1){
	cout<<v.size()<<'\n';
	for(int i=0;i<v.size();i++){
	    cout<<v[i]<<" ";
	}
    
}
else {
	cout<<v.size()-1<<'\n';
	for(int i=0;i<v.size();i++){
	    if(v[i]!=ans%n){
	        cout<<v[i]<<' ';
	   }
	}

}
return 0;	
}
