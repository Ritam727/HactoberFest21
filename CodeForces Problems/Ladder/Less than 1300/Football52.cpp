#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int count = 1;
    for (int j = 0; j < s.length() - 1; j++)
    {
        if (s[j] == s[j + 1])
        {
            count++;
            if (count==7)
            {
                break;
            }
            
        }
        else
        {
            count = 1;
        }
    }
    if (count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}