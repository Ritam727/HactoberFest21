#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int xindex = 0;
    int yindex = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j]==1)
            {
                xindex=i;
                yindex=j;   
            }
        }
    }

    cout << abs(xindex-2) + abs(yindex-2);

    return 0;
}