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

/*

Sample Input 
1
3
1 4 5
1 3 4


Sample Output
1 2 0

*/

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll a[n], b[n], c1[n], c2[n];
    ll source = -1, source2 = -1;
    int mini = INT_MAX;        // setting mini to int_max
    for (ll i = 0; i < n; ++i) //array a
        cin >> a[i];
    for (ll i = 0; i < n; ++i) // array b
        cin >> b[i];
    for (ll i = 0; i < n; ++i)
    {
        ll g = (a[0] + b[i]) % n;
        if (g < mini)
        {
            mini = g;
            source = i + 1;
        }
    }
    for (ll i = 0; i < n; ++i)
    {
        ll g = (a[0] + b[i]) % n;
        if (g == mini and ((source) != i + 1))
            source2 = i + 1;
    }

    c1[0] = mini;
    c2[0] = mini;
    if (source2 != -1)
    {
        if (source2 == 1)
        {
            ll i = 1;
            while (source2 <= n - 1)
            {
                ll m = ((a[i] + b[source2]) % n);
                c2[i] = m;
                i++;
                source2++;
            }
        }
        else
        {
            ll i = 1;
            while (source2 <= n - 1)
            {

                ll m = ((a[i] + b[source2]) % n);
                c2[i] = m;
                i++;
                source2++;
            }
            source2 = 0;
            while (i <= n - 1)
            {
                ll m = ((a[i] + b[source2]) % n);
                c2[i] = m;
                i++;
                source2++;
            }
        }
    }
    if (source == 1)
    {
        ll i = 1;
        while (source <= n - 1)
        {
            ll m = ((a[i] + b[source]) % n);
            c1[i] = m;
            i++;
            source++;
        }
    }
    else
    {
        ll i = 1;
        while (source <= n - 1)
        {

            ll m = ((a[i] + b[source]) % n);
            c1[i] = m;
            i++;
            source++;
        }
        source = 0;
        while (i <= n - 1)
        {
            ll m = ((a[i] + b[source]) % n);
            c1[i] = m;
            i++;
            source++;
        }
    }
    if (source2 != -1)
    {
        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            if (c1[i] < c2[i])
            {
                break;
            }
            else if (c1[i] > c2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << c1[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                cout << c2[i] << " ";
            }
        }
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            cout << c1[i] << " ";
        }
        cout << '\n';
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t; // testcases
    while (t--)
        solve();

    return 0;
}
