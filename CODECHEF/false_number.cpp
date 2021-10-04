#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        if(a[0]=='1'){
            cout<<a[0]<<0;
            for(int i=1;i<a.length();i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        else{
            cout<<1<<a<<endl;
        }
    }
    return 0;
}