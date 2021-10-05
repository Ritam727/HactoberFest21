#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int r1,w1,c1,r2,w2,c2;
        cin>>r1>>w1>>c1;
        cin>>r2>>w2>>c2;
        int ctr1=0,ctr2=0;
        if(r1>r2){
            ctr1++;
        }
        else{
            ctr2++;
        }
        if(w1>w2){
            ctr1++;
        }
        else{
            ctr2++;
        }
        if(c1>c2){
            ctr1++;
        }
        else{
            ctr2++;
        }

        if(ctr1>ctr2){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}