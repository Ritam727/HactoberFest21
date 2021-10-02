#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
#define pi (2 * acos(0.0))
#define int long long int
#define ull unsigned long long int
#define lp(i, start, n) for (int i = start; i < n; i++)
//Factorial
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

//returns nCr val
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        int x = max(a, b);
        int y = min(a, b);
        int r = x - y;

        if (x - 2 * y < 0 || c > 2 * (x - y))
        {
            cout << "-1" << endl;
        }
        else
        {
            if (c > r)
                cout << c - r << endl;
            else
                cout << c + r << endl;
        }
    }
    return 0;
}