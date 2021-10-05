#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;

        int dist=D*d;
        if(dist>=10 and dist<21){
            cout<<a<<"\n";
        }
        else if(dist>=21 and dist<42){
            cout<<b<<"\n";
        }
        else if(dist>=42){
            cout<<c<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
    
    return 0;
}