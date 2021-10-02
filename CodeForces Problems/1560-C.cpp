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
        int r = (int)sqrt(n);
        int rsquare = r * r;
        int moves = n - rsquare;
        int start = rsquare + 1;
        int row = 1;
        int col = r + 1;
        int maxrow = r + 1;
        while (true)
        {
            if (start >= n)
            {
                break;
            }
            else
            {
                if (row < maxrow)
                {
                    start++;
                    row++;
                }
                else
                {
                    start++;
                    col--;
                }
            }
        }

        if (r * r == n)
        {
            row = r;
            col = 1;
        }
        cout << row << " " << col << endl;
    }

    return 0;
}