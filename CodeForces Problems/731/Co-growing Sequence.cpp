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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                v.push_back(0);
            else
            {
                int x = (a[i] ^ a[i + 1]) & a[i];
                v.push_back(x);
                a[i + 1] += x;
            }
        }
        for(auto i = v.begin();i!=v.end();i++){
            cout<<(*i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}