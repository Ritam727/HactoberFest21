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
    cout.tie(NULL);
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
	int x = n/3;
	int y = n%3;
	int c1 = x;
	int c2 = x;
	if(y == 1){c1++;}
	else if(y == 2){c2++;}
	cout << c1 << " " << c2;
}