#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll mod(ll a ,ll b)
{
    ll res=1;
    while(b)
    {
        if(b%2)
        {
            res= ((res%MOD)*(a%MOD)) % MOD ;
        }
        a = ((a%MOD)*(a%MOD)) % MOD;
        b/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,res;
        cin>>n;
        res= mod(2LL,n-1);   
        cout<<res<<"\n";  
    }
    
    return 0;
}




