#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int a[26] = {0};
    int b[26] = {0};

    for (long long int i = 0; i < s1.length(); i++)
    {
        a[s1[i] - 'a'] = 1;
    }

    for (long long int i = 0; i < s2.length(); i++)
    {
        b[s2[i] - 'a'] = 1;
    }
    int i;
    for (i = 0; i < 26; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    if (i == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
