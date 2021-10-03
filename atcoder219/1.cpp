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
	int x;
	cin >> x;
	if(x<40){
		cout << 40-x;
	}
	else if(x<70){
		cout << 70-x;
	}
	else if(x<90){
		cout << 90-x;
	}
	else{
		cout << "expert";
	}
}