#include<bits/stdc++.h>
using namespace std;

vector<int> arr[100001];
int vis[100001];
long long val[100001];

long long dfs(int node,long long miny){
    vis[node]=1;

    miny = min(val[node],miny);

    for(int child:arr[node]){
    
        if (vis[child]==0)
        {
           miny = min(dfs(child,INT32_MAX),miny);
        }
    }

    return miny;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        cin>>val[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    long long ans=0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i]==0)
        {
            ans+=dfs(i,INT32_MAX);
        }
        
    }
    cout<<ans<<endl;
    
}