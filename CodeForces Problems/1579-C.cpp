#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> A(n);
    for(int i=0;i<n;i++)cin>>A[i];
    vector<string> B(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)B[i].push_back('.');
    }
    while(k<11){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>=k && j>=k && m-1-j>=k && A[i][j]=='*'){
                    int f=1;
                    for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)if(A[p][q]=='.')f=0;
                    for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)if(A[p][q]=='.')f=0;
                    if(f==1){
                        for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)B[p][q]='*';
                        for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)B[p][q]='*';
                    }
                }
            }
        }
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(B[i][j]=='.' && A[i][j]=='*') {cout<<"NO\n";return;}
            if(B[i][j]=='*' && A[i][j]=='.') {cout<<"NO\n";return;}
        }
    }
    cout<<"YES\n";

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
