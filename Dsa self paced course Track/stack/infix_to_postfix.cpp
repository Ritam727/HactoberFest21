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

int prec(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '-' || op == '+')
        return 1;
    return 0;
}
string pos_exp(string s)
{
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 97)
            res += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (st.size() != 0 && prec(s[i]) <= prec(st.top()))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    while (st.size() != 0)
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << pos_exp(s);
    cout << endl;
    return 0;
}