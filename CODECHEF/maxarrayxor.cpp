#include<iostream>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,temp=0,sum=0;
        cin>>n>>k;
        temp=pow(2,n);
        if(k>temp/2){
            k=temp/2;
        }
        sum=(temp-1)*2;
        cout<<k*sum<<"\n";
    }
    return 0;
}