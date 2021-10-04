#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, number = -2, min = 1000000000, max = 0;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i]>=max)
        {
            max=b[i];
        }
        if (a[i]<=min)
        {
            min=a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]==min && b[i]==max)
        {
            number=i;
            break;
        }
    }
    
    cout << number+1;
    
     
    return 0;
}