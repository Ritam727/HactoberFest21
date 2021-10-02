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

struct Node {
	int s, e, d;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		int n; cin >> n;
		vll v(n); cin >> v;
		vector<Node> ans;
		for(int i = 0; i < n-1; i++) {
			ll mi = v[i]; int ind = i;
			for(int j = i; j < n; j++) {
				if(mi > v[j]) {
					mi = v[j];
					ind = j;
				}
			}
			if(ind == i) {
				continue;
			}
			vll temp(n);
			for(int j = 0; j < i; j++) {
				temp[j] = v[j];
			}
			for(int j = i; j < n; j++) {
				temp[i+(n-i+j-ind)%(n-i)] = v[j];
			}
			v = temp;
			ans.pb({i+1, n, ind-i});
		}
		cout << ans.size() << "\n";
		for(Node node : ans) {
			cout << node.s << " " << node.e << " " << node.d << "\n";
		}
	}
	return 0;
}
