#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int k;
    cin >> k;
    int x = pow(2, k);
    int rem = n % x;
    if (rem >= int(pow(2, k-1)))
    {
        cout << "Yes";
    }
    else
        cout << "No";
    cout << endl;
    return 0;
}