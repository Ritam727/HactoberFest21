#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    int isomer[20]={1,1,1,2,3,5,9,18,35,75,159,355,802,1858,4347,10359,24894,60523,148284,366319};
    while(t--){
        int n;
        cin>>n;
        cout<<isomer[n-1]<<"\n";
    }
    return 0;
}