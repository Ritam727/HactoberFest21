#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

template <typename T>
istream& operator >> (istream& i, vector<T>& v) {
	for(T& j : v) i >> j;
	return i;
}

vi vis, v, ans;
int n, d;

void search(int i, int lvl) {
	if(!vis[i]) {
		vis[i] = true;
		if(v[i] == 0) {
			lvl = 0;
		} else {
			lvl++;
		}
		ans[i] = lvl;
		search((n+i+d)%n, lvl);
	}
}

void solve() {
	cin >> n >> d;
	v.resize(n); cin >> v;
	vis.assign(n, 0); ans.assign(n, 0);
	for(int i = 0; i < n; i++) {
		if(v[i] == 0) {
			search(i, 0);
		}
	}
	int ma = 0;
	for(int i = 0; i < n; i++) {
		if(v[i] == 1 && ans[i] == 0) {
			cout << "-1\n";
			return;
		}
		if(v[i] == 1) {
			ma = max(ma, ans[i]);
		}
	}
	cout << ma << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		solve();
	}
	return 0;
}
