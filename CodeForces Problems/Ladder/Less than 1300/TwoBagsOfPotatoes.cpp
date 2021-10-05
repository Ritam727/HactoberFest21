#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y, k, n, x;
    cin >> y >> k >> n;

    int x = k - y % k;
    int top = n - y;
    if (x<=top)
    {
        cout << x;
        x+=k;
        while (x<=top)
        {
            cout << " " << x;
            x+=k;
        }
    }
    else
    {
        cout << -1;
    }
    

    return 0;
}
