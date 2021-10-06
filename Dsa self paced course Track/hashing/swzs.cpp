#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

bool swzs(int a[], int n)
{
    unordered_set<int> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (s.find(sum) != s.end() || sum == 0)
            return true;
        else
            s.insert(sum);
    }
    return false;
}

int main()
{
    //	ios_base::sync_with_stdio(false);
    //	cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << swzs(a, n);
    cout << endl;
    return 0;
}