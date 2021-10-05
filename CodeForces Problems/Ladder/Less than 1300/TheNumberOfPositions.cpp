#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, res1, res2;
    cin >> n >> a >> b;

    while (1)
    {
        res1 = 1 + a;
        res2 = n - res1;
        if (res2<=b)
        {
            break;
        }
        else
        {
            a++;
        }   
    }
    cout << n-res1+1;
    return 0;
}