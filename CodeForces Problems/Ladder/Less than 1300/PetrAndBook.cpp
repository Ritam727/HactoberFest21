#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, a[7];
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int total = a[0];

    while (total<n)
    {
        i++;
        i = i%7;
        total+=a[i]; 
    }

    cout << i+1 << endl;
    
    return 0;
}   