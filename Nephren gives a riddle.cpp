#include<iostream>
using namespace std;
#define ll long long 
const int N = 1e5+9;
string s1, s2, s3 = "\"?",f0;
ll len[N];
char ch(int n, ll k)
{
	if (k >= len[n])return '.';
	if (n == 0)return f0[k];
	if (k < s1.size())return s1[k];
	k -= s1.size();
	if (k < len[n - 1])return ch(n - 1, k);
	k -= len[n - 1];
	if (k < s2.size())return s2[k];
	k -= s2.size();
	if (k < len[n - 1])return ch(n - 1, k);
	k -= len[n - 1];
	return s3[k];
}
int main()
{
	int q;
	cin >> q;

	s1 = "What are you doing while sending \"";
	s2 = "\"? Are you busy? Will you send \"";
	f0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
	len[0] = f0.size();
	
	for (int i = 1;i < N;i++)
	{
		len[i] = min(2 * len[i - 1] + (ll)(s1.size() + s2.size() + s3.size()), (ll)1e18 + 10);
	}
	while (q--)
	{
		ll n, k;
		cin >> n >> k;
		cout << ch(n, k-1);
	}
	return 0;
}
