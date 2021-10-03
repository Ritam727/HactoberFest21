#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

vector<vector<vector<ll>>> dp;

int helper(vector<pair<int, int>>& arr, int x, int y, int n){
	if(n < 0) return 1000;
	if(dp[n][x][y] != -1) return dp[n][x][y];
	int X = arr[n].first;
	int Y = arr[n].second;
	if(X >= x && Y >= y) return dp[n][x][y] = 1;
	return dp[n][x][y] = min(helper(arr, x, y, n-1), 1 + helper(arr, max(0, x-X), max(0, y-Y), n-1));
}

void solve()
{
	int n;
	cin >> n;
	int x, y;
	cin >> x >> y;
	vector<pair<int, int>> arr;
	int a, b;
	for(int i = 0; i<n; i++){
		cin >> a >> b;
		arr.push_back({a, b});
	}
	vector<vector<vector<ll>>> v(n, vector<vector<ll>>(x+1, vector<ll>(y+1, -1)));
	dp = v;
	ll ans = helper(arr, x, y, n-1);
	if(ans >= 1000){
		cout << -1;
	}
	else {
		cout << ans;
	}
	return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
	return 0;
}