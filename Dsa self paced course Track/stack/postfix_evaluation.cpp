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

int DoOperation(int a, int b, char op)
{
    switch (op)
    {
    case '^':
        return pow(b, a);
    case '*':
        return b * a;
    case '/':
        return b / a;
    case '+':
        return b + a;
    case '-':
        return b - a;
    }
    return 0;
}
int conv_int(string s){
    int x = 0;
    stringstream a(s);
    a >> x;
    return x;
}

int eval(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // cout<<"Pushing "<<to_string(s[i] - 48)<<endl;;
            st.push(to_string(s[i] - 48));
        }
        else
        {
            int a = conv_int(st.top());
            st.pop();
            int b = conv_int(st.top());
            st.pop();
            // cout<<b<<s[i]<<a<<endl;
            // cout << to_string(DoOperation(a, b, s[i])) << endl;
            st.push(to_string(DoOperation(a, b, s[i])));
        }
    }
    return conv_int(st.top());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int value = eval(s);
    cout << value;

    cout << endl;
    return 0;
}