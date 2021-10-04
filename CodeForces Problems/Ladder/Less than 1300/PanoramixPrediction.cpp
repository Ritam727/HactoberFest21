#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 0;
    n = n+1;
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            n++;
            i=2;
        }
    }
    
    if (i==m)
    {
        cout << "YES";      
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

