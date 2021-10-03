#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

void solve();

unordered_map<char, int> mp;

bool comp(string a, string b){
	int len = min(a.size(), b.size());
	for(int i = 0; i<len; i++){
		if(mp[a[i]] == mp[b[i]]) continue;
		return mp[a[i]] < mp[b[i]];
	}
	return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
	return 0;
}

void solve()
{
	string x;
	cin >> x;
	int n;
	cin >> n;
	vector <string> arr(n);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	} 
	mp.clear();
	for(int i = 0; i<26; i++){
		mp[x[i]] = i;
	}
	sort(arr.begin(), arr.end(), comp);
	for(int i = 0; i<n; i++){
		cout << arr[i] << endl;
	}
}