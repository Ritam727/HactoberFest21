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
	vector<vector<int>> v(n);
	for(int i = 0; i<n; i++){
		string s;
		cin >> s;
		vector<int> arr(5, 0);
		for(int j = 0; j<s.size(); j++){
			arr[s[j] - 'a']++;
		}
		v[i] = arr;
	}
	vector<int> count(5, 0);
	
}