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
	string s1, s2, s3;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	string t;
	cin >> t;
	string ans = "";
	for(auto c : t){
		if(c == '1'){
			ans += s1;
		}
		else if(c == '2'){
			ans += s2;
		}
		else{
			ans += s3;
		}
	}
	cout << ans;
}