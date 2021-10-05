#include <bits/stdc++.h>
using namespace std;
#define vect vector<int>

int hoalu_partition(int a[], int l, int h)
{
    int i = l-1, j = h;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] <= a[h]);
        do
        {
            j--;
        } while (a[j] > a[h]);
        if (i > j)
        {
            break;
        }
        else
            swap(a[i], a[j]);
    }
    swap(a[j + 1], a[h]);
    return j+1;
}

void quickSort(int a[], int l, int h){
    if(l<h){
        int p=hoalu_partition(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}