#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout << "YES";
            break;
        }
        
    }
    if (i==s.length())
    {
        cout << "NO";
    }
    
    return 0;
}