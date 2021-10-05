#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum=0.0, ans=0.0;
    cin >> n;
    double a[110];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=(a[i]);
    }

    ans = sum/n;

    cout << fixed << setprecision(12) << ans << endl;
    
    return 0;
}