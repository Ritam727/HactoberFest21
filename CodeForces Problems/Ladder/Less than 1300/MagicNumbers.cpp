#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long long int i = 0;
    string s;
    cin >> s;

    for (i = 0; i < s.length();)
    {
        if (s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i = i+3;
        }
        else if (s[i]=='1' && s[i+1]=='4')
        {
            i=i+2;
        }
        else if (s[i]=='1')
        {
            i = i + 1;
        }
        else
        {
            break;
        }
    }
    if (i>=s.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}