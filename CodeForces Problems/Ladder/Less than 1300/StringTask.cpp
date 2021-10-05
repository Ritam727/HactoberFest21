#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s1+='.';
            s1+=tolower(s[i]);
        }
        
    }
    cout << s1;
    return 0;
}