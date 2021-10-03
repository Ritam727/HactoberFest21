#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> arr(2, vector<int>(n, 0));
	for(int i = 0; i<n; i++){
		cin >> arr[0][i];
	}
	for(int i = 0; i<n; i++){
		cin >> arr[1][i];
	}
	if(n == 1){
		cout << 0;
		return;
	}
	vector<int> pre = arr[1];
	vector<int> suff = arr[0];
	for(int i = 1; i<n; i++){
		pre[i] += pre[i-1];
	}
	for(int i = n-2; i>=0; i--){
		suff[i] += suff[i+1];
	}
	int ans = INT_MAX;
	int temp;
	for(int i = 1; i<n-1; i++){
		temp = max(suff[], pre[i-1]);
		ans = min(ans, temp); 
	}
	ans = min(ans, suff[1]);
	ans = min(ans, pre[n-2]);
	cout << ans;
}