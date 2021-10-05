#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            cout << "0";
        }
        else if (s[i]=='-' and s[i+1]=='.')
        {
            cout << "1";
            i++;
        }
        else if (s[i]=='-' and s[i+1]=='-')
        {
            cout << "2";
            i++;
        }
        
    }
     
    return 0;
}
