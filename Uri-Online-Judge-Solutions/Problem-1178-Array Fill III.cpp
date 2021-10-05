#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
double N[100];
double T;
cin>>T;
for(int i=0;i<100;i++){
        N[i]=T;
        T=T/2;
}
for(int i=0;i<100;i++){
    cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<N[i]<<endl;
}
 
    return 0;
}