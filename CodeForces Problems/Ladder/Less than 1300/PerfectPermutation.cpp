#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res1 = 2;
    int res2 = 1;
    if (n%2!=0)
    {
        cout << -1;
    }
    int p =n/2;
    if (n%2==0)
    {
        while (p--)
        {
            cout << res1 << " " << res2 << " ";
            res1+=2;
            res2+=2;
        }
    }
    return 0;
}
