#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long int sum=0;
        if(a==b){
            sum=0;
        }
        else{
            int temp=min(a,b)+1;
            sum=ceil((b-temp)/2.0)+ceil((temp-a)/2.0);
        }

        cout<<sum<<"\n";
    }
    return 0;
}