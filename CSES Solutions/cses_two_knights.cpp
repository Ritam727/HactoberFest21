//Author rajmadhu0406 (raj.madhu0406@gmail.com)

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ull unsigned long long int	
#define mod 1000000007
 
ll nC2(ll n)
{
	return (n * (n-1))/2;
}
 
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	ll a = 8;
	ll d = 16;
	
	
	for(int i = 1; i <= n; i++)
	{
		if(i == 1)
		{
			cout<<"0\n";
		}
		else if(i == 2)
		{
			cout<<"6\n";
		}
		else
		{
			ll total = nC2(i*i);
			total -= a;
			a += d;
			d += 8;
			cout<<total<<endl;
		}
	}
	
	return 0;
}
