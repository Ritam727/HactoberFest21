#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> paths;
vector<bool> visited;

void dfs(ll s){
    visited[s] = true;
    for(ll city : paths[s]){
        if(!visited[city]){
            dfs(city);
        }
    }
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;

    for(ll i=0; i<=n; i++){
        vector<ll> temp;
        paths.push_back(temp);
        visited.push_back(false);
    }

    for(ll i=0; i<m; i++){
        ll a=0;
        ll b=0;
        cin>>a>>b;
        paths[a].push_back(b);
        paths[b].push_back(a);
    }

    ll connectedComponents = 0;
    vector<ll> roots;
    for(ll i=1; i<=n; i++){
        if(!visited[i]){
            connectedComponents++;
            roots.push_back(i);
            dfs(i);
        }
    }

    cout<<connectedComponents-1<<"\n";
    for(ll i=0; i<(connectedComponents-1); i++){
        cout<<roots[i]<<" "<<roots[i+1]<<"\n";
    }

    return 0;
}