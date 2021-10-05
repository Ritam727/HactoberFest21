#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count = 0;
    long int max = -1; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    long int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        for (int j = 0; j < n; j++)
        {
            if (b[i]%a[j]==0)
            {
                long int ratio = b[i]/a[j];
                if (ratio > max)
                {
                    max = ratio;
                    count = 1;    
                }
                else if (ratio == max)
                {
                    count++;
                }    
            }   
        } 
    }

    cout << count;
    
    return 0;
}