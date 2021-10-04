#include <bits/stdc++.h>
#include <cstdio>
#define ll long long
#define pb push_back
#define pob pop_back
#define f(i,a,b) for(int i=a; i<b; i++)
#define fr(i,a,b) for(int i=a; i>=b; i--)
#define scs(t) scanf("%d", &t);
#define sc scanf
#define pf printf
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define veci vector<int>
#define vec vector
#define sz(v) v.size()
 
using  namespace std;
const int mod = 1e9 + 7;
 
ll binexp(ll b, ll p) {
	b %= mod;
	ll r = 1;
	while(p > 0) {
		if(p & 1)
			r = (r*b)%mod;
		b = (b*b)%mod;
		p >>= 1;
	}
	return r;
}
 
void solve() {
 
}
 
int main() {
	//FASTIO
	int t; scs(t);
	while(t--) {
		int n; scs(n);
		ll a[n];
		f(i,0,n) sc("%lld", &a[i]);
		ll as[n] = {}, ds[n] = {};
		ds[0] = a[0];
		f(i,1,n) {
			ds[i] = (ds[i-1] | a[i]);
			as[i] = ds[i]^a[i]; 
		}
		f(i,0,n) pf("%lld ", as[i]);
		pf("\n");
		fflush(stdout);
	}
	return 0;
}
