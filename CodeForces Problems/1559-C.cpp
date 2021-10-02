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
        int n;
        cin >> n;
        int a[n];
        lp(i, 0, n) cin >> a[i];
        int in = 0;
        if (n == 1)
        {
            if (a[0] == 1)
            {
                cout << "2 1" << endl;
            }
            else
            {
                cout << "1 2" << endl;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == 0)
                {
                    in = i + 1;
                    break;
                }
            }
            // int ans = n - in + 1;
            //cout << in << " si ans ";
            string s = "";
            if (in == 0)
            {
                cout << n + 1 << " ";
                lp(i, 0, n)
                {
                    cout << i + 1 << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < in; i++)
                {
                    s += to_string(i + 1) + " ";
                }

                s += to_string(n + 1) + " ";

                for (int i = in; i < n; i++)
                {
                    s += to_string(i + 1) + " ";
                }
                cout << s << endl;
            }
        }
    }
    return 0;
}