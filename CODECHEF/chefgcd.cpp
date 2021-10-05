#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int k=min(x,y);
        int l=max(x,y);

    }
    return 0;
}