#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int i = 0, j = 0, indh=-1, inde=-1, indl1=-1, indl2=-1, indo=-1;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i]=='h')
        {
            indh=0;
            break;
        }
    }
    for (j = i+1; j < s.length(); j++)
    {
        if (s[j]=='e')
        {
            inde=0;
            break;
        }  
    }
    i=j;
    for (j = i+1; j < s.length(); j++)
    {
        if (s[j]=='l')
        {
            indl1=0;
            break;
        }  
    }
    i=j;
    for (j = i+1; j < s.length(); j++)
    {
        if (s[j]=='l')
        {
            indl2=0;
            break;
        }  
    }
    i=j;
    for (j = i+1; j < s.length(); j++)
    {
        if (s[j]=='o')
        {
            indo=0;
            break;
        }  
    }
    if (indh==0 && inde==0 && indl1==0 && indl2==0 && indo==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}