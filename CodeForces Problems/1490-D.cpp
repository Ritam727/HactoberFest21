#include <bits/stdc++.h>
using namespace std;
int A[100] = {0}, B[100] = {0};
void permutate(int A[], int start, int last)
{
    int mid = start;
    int max = A[start];
    for (int i = start + 1; i <= last; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            mid = i;
        }
    }
    for (int i = start; i <= last; i++)
    {
        if (i != mid)
            B[i]++;
    }
    if (start < (mid - 1))
        permutate(A, start, (mid - 1));
    if (last > (mid + 1))
        permutate(A, (mid + 1), last);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int i = 0;
    permutate(A, i, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
        B[i] = 0;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
}