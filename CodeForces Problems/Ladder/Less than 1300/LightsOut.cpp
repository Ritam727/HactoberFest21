#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a11, a12, a13, a21, a22, a23, a33, a31, a32;
    cin >> a11 >> a12 >> a13 >> a21 >> a22 >> a23 >> a31 >> a32 >> a33;

    cout << ((a11+a12+a21)%2==0 ? "1" : "0");
    cout << ((a11+a12+a13+a22)%2==0 ? "1" : "0");
    cout << ((a12+a13+a23)%2==0 ? "1" : "0");

    cout << endl;

    cout << ((a11+a21+a31+a22)%2==0 ? "1" : "0");
    cout << ((a21+a32+a22+a23+a12)%2==0 ? "1" : "0");
    cout << ((a33+a23+a22+a13)%2==0 ? "1" : "0");

    cout << endl;

    cout << ((a32+a21+a31)%2==0 ? "1" : "0");
    cout << ((a32+a31+a33+a22)%2==0 ? "1" : "0");
    cout << ((a23+a33+a32)%2==0 ? "1" : "0");
    return 0;
}