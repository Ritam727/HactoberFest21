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
	string s;
	cin >> s;
	int n = s.size();
	int con = 0;
	int vow = 0;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	vector<int> arr(26, 0);
	for(int x = 0; x<n; x++){
		if(s[x] == 'A'){
			a++;
			vow++;
		}
		else if(s[x] == 'E'){
			e++;
			vow++;
		}
		else if(s[x] == 'I'){
			i++;
			vow++;
		}
		else if(s[x] == 'O'){
			o++;
			vow++;
		}
		else if(s[x] == 'U'){
			u++;
			vow++;
		}
		else{
			con++;
			int p = s[x] - 'A';
			arr[p]++;
		}
	}
	int mx_con = 0;
	int mx_vow = max({a, e, i, o, u});
	for(int x = 0; x<26; x++){
		mx_con = max(mx_con, arr[x]);
	}
	int ans = min(con + 2*(vow - mx_vow), vow + 2*(con - mx_con));
	cout << ans;
}