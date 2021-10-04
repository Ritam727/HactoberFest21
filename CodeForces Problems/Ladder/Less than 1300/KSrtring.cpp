#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, c;
    cin >> k;
    string s, s1;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            a[s[i] - 'a']++;
        }
    }
    for (c = 0; c < 26; c++)
    {
        if (a[c] % k != 0)
        {
            break;
        }
        else
        {
            s1.append(a[c] / k, 'a' + c);
        }
    }
    if (c == 26)
    {
        while (k--)
        {
            cout << s1;
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}