#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define for_i(i,a,n,p) for(int i=a;i>=n;i-=p)
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
    int n,k;cin>>n>>k;
    veci v(n);
    fori(i,0,n,1){
        cin>>v[i];
    }int ans=0;
    veci c(n);
    partial_sum(v.begin(), v.end(), c.begin());
    for_i(i,n-1,1,1){
        int c1 = v[i];
        if (c1/float(c[i-1]) > k/100.0){
            int temp = ceil(((100.0*c1)/k)) - c[i-1];
            ans+=temp;
            v[0]+=(temp);
            partial_sum(v.begin(), v.end(), c.begin());
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