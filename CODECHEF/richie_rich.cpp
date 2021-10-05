#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<(b-a)/x<<endl;
    }
    return 0;
}