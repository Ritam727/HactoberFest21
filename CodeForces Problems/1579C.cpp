#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	string s[n];
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	bool vis[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			vis[i][j] = false;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(s[i][j] == '*') {
				int ii = i+1, jj = j+1;
				while(ii < n && jj < m) {
					if(s[ii][jj] == '.') {
						break;
					}
					if(jj-j >= k) {
						int iii = ii, jjj = jj;
						while(iii-i >= 0 && jjj < m) {
							if(s[iii][jjj] == '.') {
								break;
							}
							iii--; jjj++;
						}
						if(jjj-jj >= k+1) {
							int iiii = ii, jjjj = jj;
							while(iiii-i >= 0 && jjjj < m) {
								if(s[iiii][jjjj] == '.') {
									break;
								}
								vis[iiii][jjjj] = true;
								vis[iiii][2*jj-jjjj] = true;
								iiii--; jjjj++;
							}						
						} else {
							ii++; jj++;
							continue;
						}
						if(jjj-jj < jj-j+1) {
							for(int iiii = ii, jjjj = jj; iiii >= i;) {
								if(!vis[iiii][2*jj-jjjj]) {
									break;
								}
								jjjj++; iiii--;
							}
						}
					}
					ii++; jj++;
				}
				if(jj-j <= k && !vis[i][j]) {
					cout << "NO\n";
					return;
				}
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(s[i][j] == '*' && !vis[i][j]) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";				
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	for(int test = 1; test <= t; test++) {
		solve();
	}
	return 0;
}
