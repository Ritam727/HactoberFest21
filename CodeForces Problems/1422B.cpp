#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define F first
#define S second
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mp make_pair
#define PI 3.14159265358979323846
#define veci vector<int>
#define vecs vector<string>
#define vecip vector<pair<int,int>>
#define ls list<int>
#define deq deque<int>
#define stk stack<int>   //LIFO
#define que queue<int>   //FIFO
#define pq priority_queue<int>  //sort in des. order, asc.-> veci,greater<int>
#define uset unordered_set<int>
#define mset multiset<int>
#define pii pair<int,int>
#define int long long int
void solve(){
    int n,m;cin>>n>>m;
    int a[n][m];
    int sm = 0;
    fori(i,0,n,1){
        fori(j,0,m,1){
            cin>>a[i][j];
        }
    }
    int ans=0;
    fori(i,0,n,1){
        fori(j,0,m,1){
            int c1 = a[i][j], c2 = a[n-i-1][j], c3 = a[i][m-j-1];
            veci v;v.pb(c1);v.pb(c2);v.pb(c3);
            sort(v.begin(), v.end());
            int avg = v[1];
            a[i][j] = a[n-i-1][j] = a[i][m-j-1] = avg;
            ans += (v[2] - v[1]) + (v[1]-v[0]);
        }
    }cout<<ans<<endl;
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