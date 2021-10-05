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
void print(vector<int> v)
{
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        bool flag = true;
        int i = 0, j = 0;
        vector<int> v;
        while (i < n && j < m)
        {
            while (a[i] == 0 && i < n)
            {
                k += 1;
                v.push_back(0);
                i++;
            }
            if (i == n)
                break;
            while (b[j] == 0 && j < m)
            {
                k += 1;
                v.push_back(0);
                j++;
            }
            if (j == m)
                break;

            if (a[i] > k && b[j] > k)
            {
                flag = false;
                break;
            }
            else if (a[i] > k)
                v.push_back(b[j++]);
            else
                v.push_back(a[i++]);
        }
        if (flag != false)
            if (i != n)
                while (i < n)
                    if (a[i] <= k)
                    {
                        if (a[i] == 0)
                            k++;
                        v.push_back(a[i]);
                        i++;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
            else
                while (j < m)
                    if (b[j] <= k)
                    {
                        if (b[j] == 0)
                            k++;
                        v.push_back(b[j]);
                        j++;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
        if (flag == false)
            cout << "-1" << endl;
        else
            print(v);
    }

    cout << endl;
    return 0;
}