#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (2 * k >= n)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                continue;
            }
            else
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        cout << "YES\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}