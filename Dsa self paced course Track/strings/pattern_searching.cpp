#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;
bool search(string s2, unordered_map<char, unordered_set<int>> m, int ind, int pind)
{
    if (ind == s2.length())
        return true;
    else
    {
        if (m.find(s2[ind]) == m.end() || (*m.find(s2[ind])).second.find(pind + ind) == (*m.find(s2[ind])).second.end())
            return false;
        else
            return search(s2, m, ind + 1, pind);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, unordered_set<int>> m;
    for (int i = 0; i < s1.length(); i++)
    {
        if (m.find(s1[i]) != m.end())
            (*m.find(s1[i])).second.insert(i);
        else
        {
            unordered_set<int> set;
            set.insert(i);
            m.insert({s1[i], set});
        }
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << (*i).first << endl;
        for (auto j = (*i).second.begin(); j != (*i).second.end(); j++)
            cout << (*j) << " ";
        cout << endl;
    }
    if (m.find(s2[0]) == m.end())
        cout << "-1" << endl;
    else
    {
        for (auto i = (*m.find(s2[0])).second.begin(); i != (*m.find(s2[0])).second.end(); i++)
        {
            int ind = 1, pind = (*i);
            if (search(s2, m, ind, pind))
                cout << (*i) << " ";
        }
        cout << endl;
    }
    return 0;
}