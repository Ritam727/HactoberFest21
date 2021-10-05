#include <iostream>
 
using namespace std;
 
int main() {
int N;
cin>>N;
int X;
for(int i=1;i<=N;i++){
    cin>>X;
    int sum=0;
    for(int k=1;k<X;k++){
        if(X%k==0){
        sum+=k;
    }
    }
    if(sum==X){
        cout<<X<<" eh perfeito"<<endl;
    }
    else{
        cout<<X<<" nao eh perfeito"<<endl;
    }
    
}
    return 0;
}