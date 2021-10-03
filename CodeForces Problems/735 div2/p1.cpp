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
	vector<long long> arr(n, 0);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	long long ans = 0;
	for(int i = 1; i<n; i++){
		ans = max(ans, arr[i-1]*arr[i]);
	}
	cout << ans;
}  