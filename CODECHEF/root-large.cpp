#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        cout<<fixed<<setprecision(d)<<sqrt(n)<<endl;
    }
    return 0;
}