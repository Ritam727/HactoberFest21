#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int exit, entry;
    int count = 0;
    int max =-1;

    while (n--)
    {
        cin >> exit >> entry;
        count = count-exit+entry;
        if (max<count)
        {
            max = count;
        }
        
    }
    
    cout << max;

    return 0;
}