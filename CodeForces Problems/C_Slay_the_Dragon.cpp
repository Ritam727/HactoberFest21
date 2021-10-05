#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {   
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    ll m;
    cin>>m;
    
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=2e18;
        ll pos= lower_bound(a.begin(),a.end(),x)-a.begin();

        if(pos>0)
        {
            ans = min(ans, (x - a[pos - 1]) + max(0LL, y - sum + a[pos - 1]));
        }
        if(pos<n)
        {
            ans = /* min(ans, (x - a[pos - 1]) = 0 here + */ min(ans, max(0LL, y - (sum - a[pos])));
        }
        cout<<ans<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}