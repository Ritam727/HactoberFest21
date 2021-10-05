#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[1001]={0};
    for (int i = 0; i < n; i++)
    {
        b[a[i]-1] ++ ;
    }
    
    sort(b, b+1001, greater<int>());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << b[i] << " ";
    // }
    
    int max = b[0];
    
    if (n%2==0)
    {
        if (max<=(n/2))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        if (max<=(n/2)+1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        
    }

    
    return 0;
}