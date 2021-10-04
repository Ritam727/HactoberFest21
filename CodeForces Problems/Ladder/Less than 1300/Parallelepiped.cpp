#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    double a, b , c;
    a = sqrt(a1*a3/a2);
    b = sqrt(a2*a3/a1);
    c = sqrt(a1*a2/a3);

    double sum = a + b +c;
    cout << 4 * sum;

    return 0;
}