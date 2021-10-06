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
/* void print(int sp[])
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
int longest_substring(string s)
{
    int a[26] = {0};
    int res = 0, count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (a[s[i] - 97] != 0)
        {
            // cout<<"searching for "<<s[i] <<" at "<< i <<endl;
            int fi = a[s[i] - 97];
            for (int j = 0; j < 26; j++)
                if (a[j] <= fi && a[j]>0)
                {
                    // cout<<"found for "<<(char)(j+97)<<endl;
                    a[j] = 0;
                    count--;
                    // cout<<"count became "<<count<<endl;
                }
            // cout<<"..........................."<<endl;
        }
        a[s[i] - 97] = i + 1;
        count++;
        // print(a);
        // cout<<"count became "<< count<<endl;
        res = max(res, count);
    }
    return res;
} */
int longest_substring(string s)
{
    int a[26] = {0};
    int res = 0, count = 0, fi = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int ind = s[i]-97;
        if (a[ind] != 0 && a[ind] >= fi)
            fi = a[ind]+1;
        a[ind] = i + 1;
        count = a[ind]  - fi + 1;
        res = max(res, count);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << longest_substring(s);

    cout << endl;
    return 0;
}