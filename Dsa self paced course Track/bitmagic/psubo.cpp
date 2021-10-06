#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    n = pow(2, n);
    for (int i = 0; i < n; i++)
    {
        int j = i, k = 0;
        if (j == 0)
            cout << "' ' ";
        else
        {
            cout << "'";
            while (j > 0)
            {
                if (j & 1 == 1)
                    cout << s[k];
                k++;
                j = j >> 1;
            }
            cout << "' ";
        }
    }
    cout << endl;
    return 0;
}