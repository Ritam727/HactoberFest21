#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    if (s1==s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}