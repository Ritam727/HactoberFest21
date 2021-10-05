#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) (int)(x).size()
#define pb push_back

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.length();)
    {
        int x=0;
        char c= s[i];
        vector<int> b;
        while(s[i+x]==c)
        {
            b.pb(a[i+x]);
            x++;
        }
        i+=x;
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0;i<k && i<b.size();i++)
        {
            ans+=b[i];
        }
    }
    cout<<ans<<"\n";
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