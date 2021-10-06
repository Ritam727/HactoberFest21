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

void s_s_p(int a[], int b[], int n)
{
    stack<pii> st;
    int i = 0;
    while (i < n)
    {
        if (st.size() == 0)
        {
            b[i] = i + 1;
            st.push({a[i], i});
            i++;
        }
        else
        {
            pii x = st.top();
            if (x.first > a[i])
            {
                b[i] = i - x.second;
                st.push({a[i], i});
                i++;
            }
            else
            {
                st.pop();
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n],b[n];
    fori(0, n)
        cin >> a[i];

    s_s_p(a, b, n);

    fori(0, n)
        cout << b[i] << " ";

    cout << endl;
    return 0;
}