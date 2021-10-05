#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int maxvalue=0;
    int minvalue=1000;
    int maxindex=0;
    int minindex=0;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]>maxvalue)
        {
            maxindex=i;
            maxvalue=a[i];
        }
        if (a[i]<=minvalue)
        {
            minindex=i;
            minvalue=a[i];
        }
    }

    if (maxindex>minindex)
    {
        cout << (maxindex-1)+(n-minindex)-1;
    }
    else
    {
        cout << (maxindex-1)+(n-minindex);
    }
  
    return 0;
}