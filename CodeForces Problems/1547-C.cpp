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
		int k,n,m; sc("%d%d%d", &k, &n, &m);
		int a[n], b[m];
		f(i,0,n) scs(a[i]);
		f(i,0,m) scs(b[i]);
		int d[n+m], i = 0, j = 0, f = 1, l = 0;
		while(i < n && j < m) {
			if(a[i] >= b[j]) {
				if(b[j] <= k) {
					if(b[j] == 0) k++;
					d[l] = b[j];
				}
				else {
					f = 0; break;
				}
				j++;
			}
			else {
				if(a[i] <= k) {
					if(a[i] == 0) k++;
					d[l] = a[i];
				}
				else {
					f = 0; break;
				}
				i++;
			}
			l++;
		}
		while(i < n) {
			if(a[i] <= k) {
				if(a[i] == 0) k++;
				d[l] = a[i];
			}
			else {
				f = 0; break;
			}
			i++;l++;
		}
		while(j < m) {
			if(b[j] <= k) {
				if(b[j] == 0) k++;
				d[l] = b[j];
			}
			else {
				f = 0; break;
			}
			j++; l++;
		}
		
		if(!f) pf("-1\n");
		else {
			f(s,0,n+m) pf("%d ", d[s]);
			pf("\n");
		}
		fflush(stdout);
	}
	return 0;
}

