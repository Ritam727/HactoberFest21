#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		int n; cin >> n;
		vector<pair<int, int>> v(n);
		priority_queue<pair<int, int>> pq;
		for(int i = 0; i < n; i++) {
			cin >> v[i].first;
			if(v[i].first) {
				pq.push({v[i].first, i+1});
			}
		}
		vector<pair<int, int>> ans;
		while(pq.size() > 1) {
			pair<int, int> p1 = pq.top(); pq.pop();
			pair<int, int> p2 = pq.top(); pq.pop();
			p1.first--; p2.first--;
			if(p1.first) {
				pq.push({p1.first, p1.second});
			}
			if(p2.first) {
				pq.push({p2.first, p2.second});
			}
			ans.pb({p1.second, p2.second});
		}
		cout << ans.size() << "\n";
		for(pair<int, int> p : ans) {
			cout << p.first << " " << p.second << "\n";
		}
	}
	return 0;
}
