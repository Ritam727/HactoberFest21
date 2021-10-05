#include <bits/stdc++.h>
using namespace std;

#define vect vector<int>

//merges two sorted arrays
void merge(int a[], int l, int m, int r, int &ci)
{
    int i = l, j = m + 1;
    vect v;
    while (i < m + 1 && j < r + 1)
        if (a[i] <= a[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[j]);
            j++;
            ci += m + 1 - i;
        }
    for (; i < m + 1; i++)
        v.push_back(a[i]);
    for (; j < r + 1; j++)
        v.push_back(a[j]);
    for (int i = l; i < r + 1; i++)
        a[i] = v[i - l];
}

//mergeSort function to sort arrays
void mergeSort(int a[], int l, int r, int &ci)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m, ci);
        mergeSort(a, m + 1, r, ci);
        merge(a, l, m, r, ci);
    }
}
int main()
{
    int n, ci = 0;
    cin >> n;
    int a[n];

    //array input
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //calling mergeSort function
    mergeSort(a, 0, n - 1, ci);

    //array output
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl
         << "the no of inversions are " << ci << endl;
    return 0;
}