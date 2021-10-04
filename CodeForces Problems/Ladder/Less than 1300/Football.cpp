#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count1=1, count2=0;
    cin >> n;
    string s, s1, s2;
    cin >> s1;
    int p = n-1;
    while (p--)
    {
        cin >> s;
        if (s==s1)
        {
            count1++;
        }
        else
        {
            s2=s;
            count2++;
        }
    }
    
    if (count1 > count2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << s2 << endl;
    }
    
    return 0;
}