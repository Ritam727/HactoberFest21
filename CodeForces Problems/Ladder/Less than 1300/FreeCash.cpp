#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int i = 0;
    int count = 1;
    int max = 1;
    while (i<n-1)
    {
        if (a[i][0]==a[i+1][0] && a[i][1]==a[i+1][1])
        {
            count++;
            if (count>max)
            {
                max = count;
            }
            i++;
        }
        else
        {
            i++;
            count = 1;
        }
    }
    cout << max;
    return 0;
}