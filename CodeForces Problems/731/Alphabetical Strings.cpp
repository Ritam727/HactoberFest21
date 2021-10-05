#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define fori(s, n) for (int i = s; i < n; i++)
#define forj(s, n) for (int j = s; j < n; j++)
#define fork(s, n) for (int k = s; k < n; k++)
#define ll long long
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define usi unordered_set<int>
#define usc unordered_set<char>

using namespace std;
bool check1(string s)
{
    unordered_set<char> set;
    set.insert(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (set.find(s[i]) != set.end())
            return false;
        else
            set.insert(s[i]);
    }
    return true;
}
bool check2(string s)
{
    unordered_set<char> set;
    for (int i = 0; i < s.length(); i++)
    {
        set.insert(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (set.find((char)(i + 97)) == set.end())
            return false;
    }
    return true;
}
// bool alphabetical(string s)
// {
// if (check1(s) == false)
//     return false;
// if (check2(s) == false)
//     return false;
// int x = s.find('a');
// if (x == -1)
//     return false;
// else if (x == 0)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != (char)(i + 97))
//             return false;
//     }
//     return true;
// }
// unordered_set<int> se;
// se.insert(x - 1);
// se.insert(x + 1);
// for (int i = 1; i < s.length(); i++)
// {
//     if (se.find(s.find((char)(i + 97))) != se.end())
//     {
//         se.insert(x - 1 - i);
//         se.insert(x + 1 + i);
//     }
//     else
//     {
//         return false;
//     }
// }
// return true;
// }
bool alphabetical(string s)
{
    int i = 0;
    string s2 = "";
    while (i < s.length())
    {
        string s3 = (char)(i + 97) + s2;
        string s4 = s2 + (char)(i + 97);

        if (s.find(s3) == -1 && s.find(s4) == -1)
            return false;
        else if (s.find(s3) == -1)
            s2 = s4;
        else
            s2 = s3;
        i++;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (alphabetical(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}