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
ll fctrl(ll x, ll res)
{
    if (x != 1)
    {
        res *= x;
        x--;
        return fctrl(x, res);
    }
    return res;
}
ll factorial(ll x)
{
    if (x == 0 || x == 1)
        return 1;
    return fctrl(x, 1);
}
void print(ll sp[])
{
    fori(0, 26) if (sp[i] != 0)
            cout
        << sp[i] << " ";
    cout << endl;
    fori(0, 26) if (sp[i] != 0)
            cout
        << (char)(i + 97) << " ";
    cout << endl;
}
ll let_bef(char x, ll sp[], ll num)
{
    ll res = 0;
    cout << "................................" << endl;
    fori(0, 26)
    {
        ll tem = num;
        if ((char)(i + 97) == x)
            break;
        else if (sp[i] > 0)
        {
            sp[i]--;
            cout << "checking " << (char)(i + 97) << endl;
            forj(0, 26) if (sp[j] > 1)
                tem = tem / factorial(sp[j]);
            res += tem;
            cout << "res became " << res << endl;
            res /= 1000000007;
            sp[i]++;
        }
    }
    cout << "................................" << endl;
    return res;
}
int lexirank(string s)
{
    ll sp[26] = {0};
    fori(0, s.length())
    {
        sp[s[i] - 97]++;
        // if (sp[s[i] - 97] > 1)
        // return 0;
    }

    ll count = 0;
    fori(0, s.length())
    {
        cout << "________________________________" << endl;
        cout << s << endl
             << endl;
        print(sp);
        cout << endl;
        cout << "checking for " << s[i] << endl;
        count += let_bef(s[i], sp, factorial(s.length() - 1 - i));
        cout << "count became " << count << endl;
        cout << "________________________________" << endl
             << endl
             << endl
             << endl;
        sp[(int)s[i] - 97]--;
    }
    count = (count + 1);
    return count;
}
//uncomment all the cout statement for better understandability

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << lexirank(s) << endl;

    return 0;
}