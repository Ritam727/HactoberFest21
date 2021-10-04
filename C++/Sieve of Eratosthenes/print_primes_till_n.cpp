#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n) {
    int arr[n + 1] = {0};
    for (int i  = 2; i <= n; i++) {
        if (arr[i] == 0) {
            for (int j = i*i; j <= n; j += i) {
                arr[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) {
            cout<<i<<" ";
        }
    } cout<<endl;
}

int main() {
    int n;
    cin>>n;

    primeSieve(n);
}