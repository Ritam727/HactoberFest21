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
    for(int Case = 1; Case<=t; Case++)
    {
    	cout << "Case #" << Case << ": ";
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	vector<string> arr(k);
	string str;
	for(int i = 0; i<k; i++){
		cin >> str;
		arr[i] = str;
	}
	int n = s.size();
	long long int dist[26][26];
	for(int i = 0; i<26; i++){
		for(int j = 0; j<26; j++){
			if(i == j) dist[i][j] = 0;
			else dist[i][j] = INT_MAX;
		}
	}
	for(auto x : arr){
		int prev = x[0] - 'A';
		int next = x[1] - 'A';
		dist[prev][next] = 1;
	}
	for(int count = 0; count < 26; count++){
		for(int i = 0; i<26; i++){
			for(int j = 0; j<26; j++){
				if(dist[i][j] > dist[i][count] + dist[count][j]){
					dist[i][j] = dist[i][count] + dist[count][j];
				}
			}
		}
	}
	long long int ans = INT_MAX;
	for(int i = 0; i<26; i++){
		long long int temp = 0;
		for(auto c : s){
			int x = c - 'A';
			int cost = dist[x][i];
			temp += cost;
		}
		if(ans > temp) ans = temp;
	}
	if(ans == INT_MAX){
		cout << -1;
		return;
	}
	cout << ans;
}