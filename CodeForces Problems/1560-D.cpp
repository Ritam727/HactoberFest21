#include <bits/stdc++.h>
using namespace std;
string two_power[65];
long int ways[65] = {0};
int min()
{
    long int minimum = ways[0];
    for (int i = 1; i < 64; i++)
    {
        if (ways[i] < minimum)
            minimum = ways[i];
        ways[i] = 0;
    }
    return minimum;
}

void to_see(string &s, string &s1, int x)
{
    signed long long int a = 0, b = 0, count = 0, j = 0;
    a = s1.length();
    b = s.length();
    char c = s1.at(j);
    for (signed long long int i = 0; i < b; i++)
    {
        if (s.at(i) == c && j < a)
        {
            count++;
            j++;
            if (j < a)
                c = s1.at(j);
            else
                break;
        }
        else
            continue;
    }
    ways[x] = a + b - (2 * count);
}
void solve()
{
    signed long long int n;
    cin >> n;
    if (!(n & (n - 1)))
    {
        cout << "0" << endl;
        return;
    }
    string p = to_string(n);
    for (int i = 0; i < 64; i++)
    {
        to_see(p, two_power[i], i);
    }
    cout << min() << endl;
}

int main()
{
    for (int i = 0; i < 64; i++)
    {
        signed long long int temp = pow(2, i);
        two_power[i] = to_string(temp);
    }
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
}