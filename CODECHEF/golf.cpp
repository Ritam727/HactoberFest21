#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(x%k==0){
            cout<<"YES\n";
        }
        else if(((n+1)-x)%k==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}