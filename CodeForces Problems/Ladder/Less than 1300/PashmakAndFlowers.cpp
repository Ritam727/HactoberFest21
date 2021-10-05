#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a+n);
    long long int min = a[0];
    long long int max = a[n-1];
    long long int diff = max - min;
    cout << diff << " ";
    long long int nomax = 0, nomin = 0;
    if (a[0]==a[n-1])
    {
        cout << n*(n-1)/2;
    }
    
    else
    {
        for (long long int i = 0; i < n; i++)
        {
            if (a[i]==max)
            {
                nomax++;
            }
            else if (a[i]==min)
            {
                nomin++;
            }
        }
        // cout << nomax << " " << nomin;
        cout << nomin*nomax;
    }
    
    return 0;
}