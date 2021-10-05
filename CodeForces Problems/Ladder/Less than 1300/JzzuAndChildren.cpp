#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int max = -1;
    int index;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (ceil((double)a[i]/m)>=max)
        {
            max = ceil((double)a[i]/m);
            index = i+1;
        }   
    }
    cout << index;
    return 0;
}
