#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        if (s1[i]!=s2[i])
        {
            s1[i]='1';
        }
        else
        {
            s1[i]='0';
        }
    }
    cout << s1;
    return 0;
}

