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
	string s;
	cin >> s;
	vector<int> arr(26, 0);
	for(int i = 0; i<s.size(); i++){
		arr[s[i] - 'a']++;
	}
	int x = 0;
	int sum = 0;
	for(int i = 0; i<26; i++){
		if(arr[i] > 2){
			x += arr[i]-2;
		}
		sum += arr[i];
	}
	int ans = (sum - x)/2;
	cout << ans;
}