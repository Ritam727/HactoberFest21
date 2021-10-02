#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

void solve() {
	string s; cin >> s;
	int arr[3] = {0};
	int n = s.length();
	for(int i = 0; i < n; i++) {
		arr[s[i]-'A']++;
	}
	if(arr[0]+arr[2] == arr[1]) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		solve();
	}
	return 0;
}
