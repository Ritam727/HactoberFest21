#include <bits/stdc++.h>
using namespace std;
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define int long long int
void solve(){
    string s; cin >> s;
    int a=0,b=0,c=0;
    fori(i,0,s.length(),1){
        if (s[i]=='A'){
            a++;
        }else if (s[i]=='B'){
            b++;
        }else{
            c++;
        }
    }
    if (b-a-c==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t=1;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}