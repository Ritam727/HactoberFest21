#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        ans = ans & arr[i];
    }
    cout << ans << "\n";
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
}