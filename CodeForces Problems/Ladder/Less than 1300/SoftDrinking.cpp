#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toast1 = (k*l)/nl;
    int toast2 = c*d;
    int toast3 = p/np;
    int res = min(toast1, toast2);
    int final = min(res, toast3);
    cout << final/n;
    return 0;
}