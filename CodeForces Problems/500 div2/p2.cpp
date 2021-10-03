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
    // cin>>t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	unordered_map<int, int> map1;
	unordered_map<int, int> map2;
	for(auto el : arr){
		map1[el]++;
		map2[el&x]++;
	}
	int ans = INT_MAX;
	int temp;
	for(auto el : arr){
		temp = INT_MAX;
		if(map1[el] > 1){
			temp = min(temp, 0);
		}
		if(map2[el&x] > 1){
			temp = min(temp, 2);
		}
		if(map2.find(el) != map2.end()){
			int a = map2[el];
			int b = el&x;
			if(a > 1 || b != el){
				temp = min(temp, 1);
			}
		}
		ans = min(ans, temp);
	}
	if(ans == INT_MAX) ans = -1;
	cout << ans;
}