#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(), s.end());
    
    char c = '+';
    int i = 1;
    int count = 0;
    int n = s.length();

    while (count < (n-1))
    {
        count++;
        s.insert(i, 1, c);
        i=i+2;
    }
    
    
    cout << s;

    return 0;
}