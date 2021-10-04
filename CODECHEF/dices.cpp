#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(x+y<6){
            cout<<((6-x-y)/6.0)<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}