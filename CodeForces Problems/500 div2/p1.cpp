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
    //cin>>t;
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
	vector<int> v1(n);
	vector<int> v2(n);
	for(int i = 0; i<n; i++){
		cin >> v1[i];
	}
	for(int i = 0; i<n; i++){
		cin >> v2[i];
	}
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0; i<n; i++){
		sum1 += v1[i];
	}
	for(int i = 0; i<n; i++){
		sum2 += v2[i];
	}
	if(sum1 >= sum2){cout << "YES";}
	else{cout << "NO";}
}