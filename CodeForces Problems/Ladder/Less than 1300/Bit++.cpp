#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x=0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[1]=='+')
        {
            x+=1;
        }
        else
        {
            x-=1;
        }   
    }
    cout << x;
    return 0;
}