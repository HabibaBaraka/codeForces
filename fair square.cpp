#include <iostream>
using namespace std;
#include<numeric>
int main() 
{
    int t = 1;
cin >> t;
//SPF();
while (t--) {
	
	long long n,m;
	cin>>n>>m;
	if(n==m)cout<<1;
	else {
	 long long ans=(m/gcd(n,m))*n;
	 cout<<((ans/n)*(ans/m));
	}
cout<<endl;
}
    return 0;
}
