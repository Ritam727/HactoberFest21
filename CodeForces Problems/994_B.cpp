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

bool csort(vll v1,vll v2){
    if(v1[0]<=v2[0]){
        return true;
    }
    return false;
}

void soln(){
    ll i,j,i1,i2,i3;
    ll n,m,q,k,x;
    cin>>n>>k;
    vll v1(n),v2(n),ans(n);
    FOR(i,0,n){
        cin>>v1[i];
    }
    FOR(i,0,n){
        cin>>v2[i];
    }
    vector<vll> v3(n);
    FOR(i,0,n){
        v3[i]={v1[i],v2[i],i};
    }
    sort(all(v3),csort);
    multiset<ll> s1;
    FOR(i,0,n){
        if(s1.size()>0){
            auto it=s1.end();it--;
            ll k1=k;
            while(k1-->0){
                ans[v3[i][2]]+=(*it);
                if(it==s1.begin()){
                    break;
                }
                it--;
            }
        }
        s1.insert(v3[i][1]);
        ans[v3[i][2]]+=v3[i][1];
    }
    FOR(i,0,n){
        prt(ans[i]<<" ");
    }prt(nl);
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
