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
#define flo fflush(stdout)
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
 
int s[1700000] = {};
 
void build(int a[], int v, int l, int r) {
	if(l == r) s[v] = a[l];
	else {
		int m = (l+r)/2;
		build(a, 2*v, l, m);
		build(a, 2*v+1, m+1, r);
		s[v] = __gcd(s[2*v], s[2*v+1]);
	}
}
 
int gcd(int v, int tl, int tr, int l, int r) {
	if(l > r) return 0;
	if(l == tl && r == tr) { return s[v]; }
	int tm = (tl+tr)/2;  
	int a1 = gcd(2*v, tl, tm, l, min(tm,r)), a2 = gcd(2*v+1, tm+1, tr, max(l, tm+1), r);
	if(a1 > 0 && a2 > 0)
		return __gcd(a1,a2);
	return max(a1,a2);
}
 
int solve(int a[], int n, int k, int g) {
	f(i,0,n) {
		if(gcd(1, 0, 2*n-1, i, i+k-1) != g)
			return 0;
	}	
	return 1;
}
 
int main() {
	//FASTIO
	int t; scs(t);
	while(t--) {
		int n; scs(n);
		int a[2*n], cnt = 0;
		f(i,0,n) { 
			scs(a[i]);
		}
		int g = a[0];
		f(i,0,n) {
			g = __gcd(g, a[i]);
			a[i+n] = a[i];
		}
		build(a, 1, 0, 2*n-1);
		int l = 1, r = n;
		while(l < r) {
			int m = (l+r)/2;
			if(solve(a, n, m, g)) r = m;
			else l = m+1;
		}
		pf("%d\n", l-1); flo;
	}
	return 0;
}
