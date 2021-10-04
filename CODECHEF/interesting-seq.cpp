#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int seq[N];
int hcf[N];

int gcd(int a, int b)
{
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int x=0,sum=0;
    for(int i=1;i<N;i++){
        seq[i]=x+(i*i);
    }

    for(int i=1;i<N;i++){
        hcf[i]=gcd(seq[i],seq[i+1]);
        sum +=hcf[i];
    }

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;

    }

    return 0;
}