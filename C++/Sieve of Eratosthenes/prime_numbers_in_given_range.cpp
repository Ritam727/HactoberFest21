#include <bits/stdc++.h>
using namespace std;

void primesinrange(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i == 1 || i == 0) {
            continue;
        }

        int flag = 1;

        for (int j = 2; j <= i/2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout<<i<<" ";
        }
    }
}

int main () {
    int x,y;
    cin>>x>>y;

    primesinrange(x,y);
    return 0;
}