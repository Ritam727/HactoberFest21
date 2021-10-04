#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ucount=0, lcount=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            lcount++;
        }
        else
        {
            ucount++;
        }        
    }
    if (lcount>=ucount)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout << s;
    }
    else if (lcount<ucount)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout << s;
    }
    
    return 0;
}