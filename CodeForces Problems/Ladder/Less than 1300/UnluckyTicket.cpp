#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    bool increase=false, decrease=false;

    string s1 = s.substr(0, n);
    sort(s1.begin(), s1.end());

    string s2 = s.substr(n, n);
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n; i++)
    {
        if (s1[i]>s2[i])
        {
            increase = true;    
        }
        else
        {
            increase = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s1[i]<s2[i])
        {
            decrease = true;    
        }
        else
        {
            decrease = false;
            break;
        }
    }
    
    if (increase || decrease)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
