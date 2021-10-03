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
	long double W, H;
	cin >> W >> H;
	long double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long double w, h;
	cin >> w >> h;
	long double left = x1;
	long double right = W - x2;
	long double down = y1;
	long double up = H - y2;
	long double ans = INT_MAX;
	long double hor = max(left, right);
	long double ver = max(up, down);
	if(hor >= w || ver >= h) {
		ans = 0;
		cout<<fixed<<setprecision(8) <<ans;
		return;
	}
	if(w + (x2-x1) <= W){
		ans = min(ans, w - hor);
	}
	if(h + (y2-y1) <= H){
		ans = min(ans, h - ver);
	}
	if(ans == INT_MAX){
		cout<<fixed<<setprecision(8) << -1;;
		return;
	}
	cout<<fixed<<setprecision(8) << ans;
}