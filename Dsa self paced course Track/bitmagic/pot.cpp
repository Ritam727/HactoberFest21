#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

void pot(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    if (count == 1 && n!=1)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    pot(n);
    cout << endl;
    return 0;
}