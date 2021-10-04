#include <bits/stdc++.h>
using namespace std;

void factorSieve(int n) {
    int arr[n + 1] = {0};
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                if (arr[j] == j) {
                    arr[j] = i;
                }
            }
        }
    }

    while (n != 1) {
        cout<<arr[n]<<" ";
        n = n/arr[n];
    }
}

int main() {
    int n;
    cin>>n;

    factorSieve(n);
}
