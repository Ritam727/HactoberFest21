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
	long long int n;
	cin >> n;
	if(n<=6){
		cout << 15;
		return;
	}
	if(n%2 == 1) n++;
	long long int ans = (n/2)*5;
	cout << ans;
}