#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, time=0;
    cin >> n >> m;
    long long int a[m];
    for (long long int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    long long int i = 0;
    time = a[0]-1;
    // cout << time;
    while (i<m-1)
    {
        if (a[i+1]>=a[i])
        {
            time += a[i+1]-a[i];
            // cout << time;
        }
        else
        {
            time += n-a[i]+a[i+1]; 
            // cout << time;
        }
        i++;   
    }
    cout << time;
    return 0;
}