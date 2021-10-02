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
    ll a, b;
    cin >> a >> b;

    ll x1 =- 1, y1 = -1, x2 = -1, y2 = -1;

    for(ll i=1;i<a;i++)
    {
        
        ll tt = (a*a - i*i);
        ll p = sqrt(tt);
        if(p*p == tt){
            x1 = i; y1 = p;
            ll g = gcd(x1, y1);

            x2 = (-y1/g), y2 = (x1/g);

            ll ln = (x2*x2 + y2*y2);

            if((b*b)%ln == 0)
            {
                x2 = x2*(b/sqrt(ln)); y2 = y2*(b/sqrt(ln));
                if(y1 != y2){
                    cout << "YES\n0 0\n";
                    cout << x1 << " " << y1 << "\n";
                    cout << x2 << " " << y2 << "\n";
                    return;

                }

            }
        }
    }

    cout << "NO\n";
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