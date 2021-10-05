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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        pii c1, c2, c3;
        int res;
        cin >> c1.first >> c1.second;
        cin >> c2.first >> c2.second;
        cin >> c3.first >> c3.second;
        if (c1.first == c2.first)
        {
            res = abs(c2.second - c1.second);
            if (c3.first == c1.first && c3.second> min(c1.second,c2.second) && c3.second < max(c1.second , c2.second))
            {
                res += 2;
            }
        }
        else if (c1.second == c2.second && c3.first > min(c1.first, c2.first) && c3.first < max(c1.first, c2.first))
        {
            res = abs(c2.first - c1.first);
            if (c3.second == c1.second)
            {
                res += 2;
            }
        }
        else{
            res = abs(c2.second -c1.second) + abs(c2.first - c1.first);
        }
        cout << res;
        cout << endl;
    }

    return 0;
}