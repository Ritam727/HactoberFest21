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
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	vector<vector<int>> v;
	for(int i = 0; i<n; i++){
		v.push_back({arr[i], i});
	}
	sort(arr.begin(), arr.end());
	int i = 0;
	vector<int> used;
	while(i<n){
		int low = lower_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
		int hi = upper_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
		if(hi - low > k){
			used.push_back(low);
			i = hi - 1;
		}
		i++;
	}
	unordered_set<int> zero;
	for(auto it : used){
		int start = it + k;
		while(arr[start] == arr[start-1]){
			zero.insert(arr[start]);
			start++;
		}
	}
	int j = 0;
	int count = 1;
	while(j<n){
		if(count > k){
			count = 1;
		}
		int num = v[j][0];
		if(zero.find(num) != zero.end()){
			zero.erase(zero.find(num));
			v[j].push_back(0);
		}
		else{
			v[j].push_back(count);
			count++;
		}
		j++;
	}
	vector<int> ans(n, 0);
	for(auto x : v){
		int col = x[2];
		int index = x[1];
		ans[index] = col;
	}
	for(auto x : ans){
		cout << x << " ";
	} 
}