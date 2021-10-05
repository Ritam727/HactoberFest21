#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int time;
    cin >> time;
    string str;
    cin >> str;
    while (time--)
    {
        for (int i = 0; i < num; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G'){
               std::swap(str[i], str[i+1]);
               i+=1;
            }
        }
    }
    cout << str;
}