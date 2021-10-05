#include <iostream>
using namespace std;
 
int main() {
int N;
cin>>N;
int X[N];
for(int i=0;i<N;i++){
    cin>>X[i];
}
int min=X[0];
int pos=0;
for(int i=0;i<N;i++){
    if(min>X[i]){
        min=X[i];
        pos=i;
    }
}

cout<<"Menor valor: "<<min<<endl;
cout<<"Posicao: "<<pos<<endl;
    return 0;
}