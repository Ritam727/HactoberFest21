#include<iostream>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int e,k,ctr=0;
        cin>>e>>k;
        while(e!=0){
            e=e/k;
            ctr++;
        }
        cout<<ctr<<"\n";
    }
    return 0;
}