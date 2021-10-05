#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;

#define pb push_back
#define mp make_pair
#define sz(s) (int)s.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ub upper_bound
#define lb lower_bound
#define repp(i, n, a) for (int i = n; i >= a; i--)
#define re(a, n) rep(i, 0, n) cin >> a[i];
const long double pi = 2 * acos(0.0);
const int mod = 1e9 + 7;
const int maxn = 2e5 + 5;
const int e = 1e5 + 5;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<ll, ll> M;
    for (ll i = 0; i < n; i++)
    {
        if (M.find(a[i]) == M.end())
        {
            M[a[i]] = 1;
        }
        else
        {
            M[a[i]]++;
        }
    }
    for (auto &it : M)
    {
        if (it.second > 0)
        {
            sum += ((n - it.second) * it.second);
        }
    }

    cout << sum << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
