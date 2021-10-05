#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, countg = 0, countb = 0;
    cin >> n >> m;

    char a[n + m];
    if (m == n)
    {
        for (int i = 0; i < m + n; i += 2)
        {
            a[i] = 'G';
        }
        for (int i = 1; i < m + n; i += 2)
        {
            a[i] = 'B';
        }
    }

    else if (n > m)
    {
        for (int i = 0; i < m + n; i++)
        {
            a[i] = 'B';
        }
        for (int i = 1; i < m + n; i += 2)
        {
            a[i] = 'G';
            countg++;
            if (countg == m)
            {
                break;
            }
        }
    }

    else
    {
        for (int i = 0; i < m + n; i++)
        {
            a[i] = 'G';
        }
        for (int i = 1; i < m + n; i += 2)
        {
            a[i] = 'B';
            countb++;
            if (countb == n)
            {
                break;
            }
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << a[i];
    }
    return 0;
}