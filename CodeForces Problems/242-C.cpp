#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fn(i ,st, n) for(int i = st; i < n; i++)
ll gcd(ll a, ll b){if(b == 0) return a; return gcd(b, a % b);}
ll _power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1;a *= a; a %= mod;} return p % mod;}
ll _modI(ll a, ll m){ return _power(a, m - 2, m);}
const ll N = 2e5 + 5;
const ll sz = 1e6 + 5;
const ll mod = 1e9+7;
const ll inf = 1e18;

void solve()
{
    ll x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    ll n;
    cin >> n;

    map<ll, map<ll, ll>> vis;
    map<ll, map<ll, ll>> dist;

    vector<pair<ll, ll>> st={{-1,-1},{-1,0},{0,-1},{0,1},{1,0},{1,1},{1,-1},{-1,1}};

    fn(i,0,n)
    {
        ll r, a, b;
        cin >> r >> a >> b;

        for(int j=a;j<=b;j++)
        {
            vis[r][j] = -1;
            dist[r][j] = 0;
        }
    }

    queue<pair<ll, ll>> bfs;

    bfs.push(make_pair(x0, y0));
    vis[x0][y0] = 1;
    

    while(!bfs.empty())
    {
        pair<ll, ll> tt = bfs.front();
        bfs.pop();

        for(auto j:st)
        {
            ll rr = tt.first+j.first, cc = tt.second+j.second;
            if(vis[rr][cc] == -1)
            {
                vis[rr][cc] = 1;
                bfs.push(make_pair(rr, cc));
                dist[rr][cc] = dist[tt.first][tt.second]+1; 
            }
        }
    }


    if(dist[x1][y1] == 0){
        cout << "-1\n";
    }
    else cout << dist[x1][y1] << "\n";
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