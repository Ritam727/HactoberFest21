#include <bits/stdc++.h>
using namespace std;
#include <chrono>

#define vect vector<int>
int partition(int a[], int l, int r)
{
    if (r-l > 1)
    {
        int p = (rand() % (r - l + 1)) + l;
        swap(a[p], a[r]);
    }
    int i = l, j = r - 1;
    while (i < j)
    {
        while (i < r)
        {
            if (a[i] > a[r])
            {
                break;
            }
            i++;
        }
        while (j >= l)
        {
            if (a[j] < a[r])
            {
                break;
            }
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[r], a[j + 1]);
    return j + 1;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int p = partition(a, l, r);
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    auto start = std::chrono::high_resolution_clock::now();

    quickSort(a, 0, n - 1);

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}