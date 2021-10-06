//https://codeforces.com/problemset/problem/1352/E
#include<bits/stdc++.h> 

using namespace std; 

typedef int ll; 
typedef vector<long long int> vll; 

#define fastread ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0) 
#define FOR(i,a,b) for(ll i=a;i<b;i++) 
#define XFOR(i,a,b) for(ll i=a;i>=b;i--)
#define prt(s) cout<<s 
#define nl "\n"
#define INF (ll(1e18))

void soln(){
    ll i,j,i1,i2,i3;
    ll n,m,q,k,x;
    cin>>n;
    vll v(n),sig(n),M(n+1,0);
    ll ans=0,MAX=-INF;
    FOR(i,0,n){
        cin>>v[i];
        v[i]>MAX?MAX=v[i]:MAX=MAX;
    }
    sig[0]=v[0];
    FOR(i,1,n){
        sig[i]=sig[i-1]+v[i];
    }
    FOR(i,1,n){
        XFOR(j,i-1,0){
            ll temp=sig[i]-sig[j]+v[j];
            if(temp>MAX){
                break;
            }
            M[temp]++;
        }
    }
    FOR(i,0,n){
        if(M[v[i]]){
            ans++;
        }
    }
    prt(ans<<nl);
}

int main() 
{ 
    fastread; 
    ll TC;
    cin>>TC;
    while(TC--){
        soln();
    }
    return 0;
}