#include<bits/stdc++.h> 

using namespace std; 

typedef long long int ll; 
typedef vector<long long int> vll; 

#define fastread ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0) 
#define FOR(i,a,b) for(ll i=a;i<b;i++) 
#define pb(x) push_back(x)
#define prt(s) cout<<s 
#define all(v) v.begin(),v.end()
#define nl "\n"

void soln(){
    ll i,j,i1,i2,i3;
    ll n,m,q,k,x,ans;
    cin>>n>>k;
    vll v(n);
    FOR(i,0,n){
        cin>>v[i];
    }
    ans=v[n-1]-v[0];
    vll temp;
    FOR(i,1,n){
        temp.pb(v[i]-v[i-1]);
    }
    sort(all(temp),greater<ll>());
    FOR(i,0,k-1){
        ans-=temp[i];
    }
    prt(ans<<nl);
}

int main() 
{ 
    fastread; 
    ll TC=1;
    while(TC--){
        soln();
    }
    return 0;
}
