#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]-'a']++;
    }

    int even = 0, odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i]%2!=0)
        {
            odd++;   
        }
        else
        {
            even++;
        }
    }
    
    if (odd==0 || odd%2!=0)
    {
        cout << "First";
    }
    else
    {
        cout << "Second";
    }
    
    return 0;
}