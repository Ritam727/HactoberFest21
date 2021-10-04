#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int index[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        index[a[i]]=i;
    }
    long long int q, m, vasya=0, petya=0;
    cin >> q;
    while (q--)
    {
        cin >> m;
        vasya += index[m];
        petya += n - index[m] + 1;
    }
    cout << vasya << " " << petya;
    
    return 0;
}