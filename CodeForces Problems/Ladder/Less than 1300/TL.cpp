#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    return a>b?a:b;
}

int timeLimit(int correct[], int wrong[], int n, int m)
{
    sort(correct, correct+n);
    sort(wrong, wrong+m);

    int max = correct[n-1];
    int min = wrong[0];
    int correct_min = correct[0];

    int val = maximum(2*correct_min, max);
    if (val < min)
    {
        return val;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int correct[101], wrong[101];
    for (int i = 0; i < n; i++)
    {
        cin >> correct[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> wrong[j];
    }

    cout << timeLimit(correct, wrong, n, m);

    return 0;
}