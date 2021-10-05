#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, time, count = 1, minindex = 0, mintime = 1000000001;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> time;
        if (time < mintime)
        {
            mintime = time;
            minindex = i;
            count = 1;
        }
        else if (mintime == time)
        {
            count++;
        }   
    }
    if (count == 1)
    {
        cout << minindex;
    }
    else
    {
        cout << "Still Rozdil";
    }
    return 0;
}