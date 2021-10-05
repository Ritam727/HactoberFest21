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

struct st
{
    stack<int> stk;
    int min;
    void push(int a)
    {
        if (stk.empty())
        {
            min = a;
            stk.push(a);
        }
        else if (a <= min)
        {
            stk.push(2*a - min);
            min = a;
        }
        else
            stk.push(a);
    }
    int top()
    {
        int t = stk.top();
        if (t <= min)
            return min;
        else
            return t;
    }
    void pop()
    {
        int t = stk.top();
        if (t <= min)
            min = 2*min - t;
        stk.pop();
    }
    int size()
    {
        return stk.size();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    st a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Top and min is " << a.top() << " " << a.min << endl;
        a.pop();
    }

    return 0;
}