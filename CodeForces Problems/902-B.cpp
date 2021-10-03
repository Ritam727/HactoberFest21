#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fn(i ,st, n) for(int i = st; i < n; i++)
ll gcd(ll a, ll b){if(b == 0) return a; return gcd(b, a % b);}
ll _power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1;a *= a; a %= mod;} return p % mod;}
ll _modI(ll a, ll m){ return _power(a, m - 2, m);}
const ll N = 2e4 + 5;
const ll sz = 1e6 + 5;
const ll mod = 1e9+7;
const ll inf = 1e18;
vector<vector<int>> tree(N);
int ans = 1;

int col[N];
void dfs(int parent)
{
    for(auto node:tree[parent])
    {
        if(col[node] != col[parent]) ans++;
        dfs(node);
    }
}

void solve()
{
    ll n;
    cin >> n;

    fn(i,0,n-1)
    {
        int x;
        cin >> x;

        tree[x].push_back(i+2);
    }

    col[0]=0;
    fn(i,1,n+1){
        cin >> col[i];
    }

    dfs(1); 
    cout << ans << "\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while(tc--)
    {
        solve();
    }
}