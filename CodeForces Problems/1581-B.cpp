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
    ll n, m, k;
    cin >> n >> m >> k;

    if(m < n-1 || m > n*(n-1)/2){
        cout << "NO\n";
        return;
    }

    if(n==1)
    {
        
        if(k>1) cout << "YES\n";
        else cout << "NO\n";
        return;
    }
    
    if(m == n*(n-1)/2)
    {
        if(k > 2){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    else
    {
        if(k > 3){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}