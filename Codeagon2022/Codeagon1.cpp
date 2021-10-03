#include<iostream>
#include<vector>
#include<algorithm>
#define modulo 1000000007
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    for(int i=0;i<n;i++){
        c[i] = a[i] - b[i];
    }
    sort(c.begin(),c.end(),greater<int>());
    long long ans = 0;
    for(int i=0;i<n;i++){
        ans = ans + (2*n * a[i])%modulo;
        ans = ans%modulo;
    }
    for(int i=0;i<n;i++){
        ans = ans - (2*i*c[i])%modulo;
        ans = ans%modulo;
    }
    for(int i=0;i<n;i++){
        ans = ans - c[i];
    }
    ans = ans%modulo;
    cout<<ans<<endl;
    return 0;
}