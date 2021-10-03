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

long long int dfs(unordered_map<int, vector<int>>& map, vector<int>& cost, int curr, int prev){
	long long int ans = cost[curr];
	long long int temp = 0;
	long long int mx = 0;
	for(auto next : map[curr]){
		if(next != prev){
			temp = dfs(map, cost, next, curr);
			if(temp > mx) mx = temp;
		}
	}
	ans += mx;
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> cost(n+1, 0);
	for(int i = 1; i<=n; i++){
		cin >> cost[i];
	}
	unordered_map<int, vector<int>> map;
	for(int i = 0; i<n-1; i++){
		int cave1, cave2;
		cin >> cave1 >> cave2;
		map[cave1].push_back(cave2);
		map[cave2].push_back(cave1);
	}
	long long int ans = cost[1];
	long long int ans1 = 0, ans2 = 0;
	vector<long long int> arr;
	for(auto next : map[1]){
		long long int val = dfs(map, cost, next, 1);
		arr.push_back(val);
	}
	sort(arr.begin(), arr.end());
	int len = arr.size();
	if(len == 1) ans += arr[0];
	else if(len > 1) ans += arr[len-1] + arr[len-2];
	cout << ans;
}
