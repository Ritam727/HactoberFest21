//https://codeforces.com/contest/1279/problem/C
#include<bits/stdc++.h> 

using namespace std; 

typedef long long int ll; 
typedef vector<long long int> vll; 
typedef map<long long int,long long int> mll;

#define fastread ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0) 
#define FOR(i,a,b) for(ll i=a;i<b;i++) 
#define prt(s) cout<<s 
#define all(v) v.begin(),v.end()
#define nl "\n"
#define INF (ll(1e18))


void soln(){
    ll i,j,i1,i2,i3;
    ll n,m,q,k,x;
    cin>>n>>m;
    vll v1(n),v2(m);
    FOR(i,0,n){
        cin>>v1[i];
    }
    FOR(i,0,m){
        cin>>v2[i];
    }
    mll MAP;
    ll ind=0,ans=0,ht=0;
    FOR(i,0,n){
        if(ind>=m){
            break;
        }
        if(v1[i]==v2[ind]){
            ans+=2*(ht)+1;
            ind++;
            while(ind<m&&MAP[v2[ind]]>0){
                ht--;
                ans++;
                ind++;
            }
        }
        else{
            MAP[v1[i]]++;
            ht++;
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
