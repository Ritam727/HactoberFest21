#include <bits/stdc++.h>
using namespace std;
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define int long long int
int binarySearch(int arr[], int, int, int);
int exponentialSearch(int arr[], int n, int x){
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= x)
        i = i*2;
    return binarySearch(arr, i/2,
                            min(i, n-1), x);
}
int binarySearch(int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}
int32_t main(void){
   int arr[] = {1, 5, 8, 11, 34, 77};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 11;
   int result = exponentialSearch(arr, n, x);
   (result == -1)? cout <<"Element is not present in array" : cout <<"Element is present at index " << result;
   return 0;
}