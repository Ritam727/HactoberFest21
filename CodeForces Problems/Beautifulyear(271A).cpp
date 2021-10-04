#include <bits/stdc++.h>
using namespace std;
int main()
{

    int year;
    cin >> year;
    for (int number = year + 1; number <=9012; number++)
    {
        int n1 = number % 10;
        int n2 = (number / 10) % 10;
        int n3 = (number / 100) % 10;
        int n4 = (number / 1000) % 10;

        if (n1 != n2 && n2 != n3 && n3 != n4 && n4 != n1 && n4 != n2 && n1 != n3)
        {
            cout << number;
            number = 9013;
        }
    }
}