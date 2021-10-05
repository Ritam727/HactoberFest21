#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int i=0, t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    char a[t];
    for (i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i]=='E' && sx<ex)
        {
            sx+=1;   
        }
        else if (a[i]=='S' && sy>ey)
        {
            sy-=1;
        }
        else if (a[i]=='N' && sy<ey)
        {
            sy+=1;
        }
        else if (a[i]=='W' && sx>ex)
        {
            sx-=1;
        }
        if (sy==ey && sx==ex)
        {
            break;
        }
    }
    if (i+1<=t)
    {
        cout << i+1;   
    }
    else
    {
        cout << -1;
    }
       
    return 0;
}