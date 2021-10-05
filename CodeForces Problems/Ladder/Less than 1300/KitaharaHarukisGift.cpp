#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, no1=0, no2=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]==100)
        {
            no1++;
        }
        else
        {
            no2++;
        }
    }

    if (no1%2==0 && no2%2==0)
    {
        cout << "YES";
    }
    else if (no1%2==0 && no2%2!=0)
    {
        cout << "YES";
    }
    else if (no1%2!=0 && no2%2==0 && no1<no2)
    {
        cout << "NO";
    }
    else if (no1%2!=0 && no2%2==0 && no1>no2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }



    
    return 0;
}