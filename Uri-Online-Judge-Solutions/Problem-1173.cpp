#include <iostream>
 
using namespace std;
 
int main() {
int N[10];
int V;
cin>>V;
int k=V;
for(int i=0;i<10;i++){
    N[i]=k;
    k=k*2;
}
for(int i=0;i<10;i++){
    cout<<"N["<<i<<"] = "<<N[i]<<endl;
}
    return 0;
}