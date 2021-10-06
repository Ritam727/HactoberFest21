#include <bits/stdc++.h>
using namespace std;

#define vect vector<int>

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }
    int i = 0, j = n - 1;
    while (a[i] == 0)
    {
        i++;
    }
    while (a[j] == 2)
    {
        j--;
    }
    int k = i;
    while (i < j && k <= j)
    {

        if (a[k] < 1)
        {
            swap(a[i], a[k]);
            i++;
        }
        else if (a[k] > 1)
        {
            swap(a[k], a[j]);
            j--;
        }
        if (a[k] == 1)
            k++;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        //     cout << endl;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}