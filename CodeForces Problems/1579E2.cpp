#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

struct segTree {
	int size = 1;
	vll tree;
	
	void init(int n) {
		while(size < n) {
			size *= 2;
		}
		tree.assign(2*size, 0LL);
	}
	
	ll getSum(int l, int r, int x, int lx, int rx) {
		if(l >= rx || lx >= r) {
			return 0;
		}
		if(l <= lx && rx <= r) {
			return tree[x];
		}
		int m = (lx+rx)/2;
		ll s1 = getSum(l, r, 2*x+1, lx, m);
		ll s2 = getSum(l, r, 2*x+2, m, rx);
		return s1+s2;
	}
	
	ll getSum(int l, int r) {
		return getSum(l, r, 0, 0, size);
	}
	
	void add(int i, int x, int lx, int rx) {
		if(rx-lx == 1) {
			tree[x] += 1;
			return;
		}
		int m = (lx+rx)/2;
		if(i < m) {
			add(i, 2*x+1, lx, m);
		} else {
			add(i, 2*x+2, m, rx);
		}
		tree[x] = tree[2*x+1]+tree[2*x+2];
	}
	
	void add(int i) {
		add(i, 0, 0, size);
	}
};

int search(vll& v, ll x) {
	int s = 0, e = v.size()-1;
	while(e >= s) {
		int m = s+(e-s)/2;
		if(v[m] == x) {
			return m;
		} else if(v[m] < x) {
			s = m+1;
		} else {
			e = m-1;
		}
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		int n; cin >> n;
		set<ll> s;
		vll a(n);
		for(int i = 0; i < n; i++) {
			ll x; cin >> x;
			a[i] = x; s.insert(x);
		}
		vll v(s.begin(), s.end());
		int ms = v.size();
		segTree st; st.init(ms);
		ll ans = 0;
		for(int i = 0; i < n; i++) {
			int it = search(v, a[i]);
			ll s1 = st.getSum(0, it);
			ll s2 = st.getSum(it+1, ms);
			ans += min(s1, s2);
			st.add(it);
		}
		cout << ans << "\n";
	}
	return 0;
}
