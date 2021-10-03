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
    for(int i = 1; i<=t; i++)
    {
    	cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	int n;
	cin >> n;
	vector<string> arr(n);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int ans = n+1;
	int count = 0;
	vector<vector<int>> ones(n, vector<int>(n, 0));
	for(int i = 0; i<n; i++){
		int x = 0;
		int dot = 0;
		for(int j = 0; j<n; j++){
			if(arr[i][j] == 'X') x++;
			else if(arr[i][j] == '.') dot++;
		}
		if(x + dot == n){
			if(ans > dot){
				ans = dot;
				count = 1;
			}
			else if(ans == dot){
				count++;
			}
			if(dot == 1){
			for(int j = 0; j<n; j++){
				if(arr[i][j] == '.') ones[i][j]++;
			}
		}
		}
	}
	for(int i = 0; i<n; i++){
		int x = 0;
		int dot = 0;
		for(int j = 0; j<n; j++){
			if(arr[j][i] == 'X') x++;
			else if(arr[j][i] == '.') dot++;
		}
		if(x + dot == n){
			if(ans > dot){
				ans = dot;
				count = 1;
			}
			else if(ans == dot){
				count++;
			}
			if(dot == 1){
			for(int j = 0; j<n; j++){
				if(arr[j][i] == '.') ones[j][i]++;
			}
		}
		}
	}
	if(count == 0){
		cout << "Impossible";
		return;
	}
	if(ans == 1){
		int val = 0;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(ones[i][j] > 0) val++;
			}
		}
		cout << ans << " " << val;
		return;
	}
	cout << ans << " " << count;
}