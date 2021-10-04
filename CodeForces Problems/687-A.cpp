#include<bits/stdc++.h>
using namespace std;

vector<int> arr[100001];
int vis[100001];
int par[100001];
vector<int> v1,v2;

int dfs(int node,int h){
    vis[node]=1;
    int ans=0;
    if (h==0&&arr[node].size()==0)
    {
        return 0;
    }
    
    if (h%2==0)
    {
        v1.push_back(node);
        par[node]=2;
    }
    else{
        v2.push_back(node);
        par[node]=1;
    }
    
    
    for(int child:arr[node]){
        if (par[child]==par[node])
        {
            return -1;
        }
        
    
        if (vis[child]==0)
        {
           int ans = dfs(child,h+1);
           if (ans==-1)
           {
               return -1;
           }
           
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i]==0)
        {
            int ans = dfs(i,0);
            if (ans==-1)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v1.size()<<endl;
    for(auto x: v1){
        cout<<x<<" ";
    }
    cout<<endl<<v2.size()<<endl;
     for(auto x: v2){
        cout<<x<<" ";
    }
}