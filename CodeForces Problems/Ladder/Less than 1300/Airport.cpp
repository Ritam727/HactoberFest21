#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >>m;

    int k=n;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b, b+m);
    sort(a, a+m, greater<int>());
    int max = 0, min=0, i=0;
    while (n--)
    {
        i%=m;
        if (a[i]==0)
        {
            i++;
            continue;
        }
        
        max+=a[i];
        a[i]=a[i]-1;
        // cout << max << " ";
        // i++;
        sort(a, a+m, greater<int>());
    }
    i=0;
    while (k--)
    {
        min+=b[i];
        b[i]--;
        if (b[i]==0)
        {
            i++;
        }
        // cout << min << " ";
    }
    cout << max << " " << min;
    return 0;
}