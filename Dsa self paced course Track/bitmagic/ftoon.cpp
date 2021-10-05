#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

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
            cin >> a[i];
        
        int x = a[0];
        
        for (int i = 1; i < n; i++)
            x = x ^ a[i];
        
        int rsc = log2(x - (x & (x - 1)));
        int oo = 0, to = 0;
        
        for (int i = 0; i < n; i++)
            if (((a[i] >> rsc) & 1) == 1)
                oo = oo ^ a[i];
            else
                to = to ^ a[i];
        
        cout << oo << " " << to << endl;
    }
    return 0;
}