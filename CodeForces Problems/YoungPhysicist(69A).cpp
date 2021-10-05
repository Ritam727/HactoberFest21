#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int ar[num][3];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ar[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < num; i++)
    {
        sum1 = sum1 + ar[i][0];
    }
    for (int i = 0; i < num; i++)
    {
        sum2 = sum2 + ar[i][1];
    }
    for (int i = 0; i < num; i++)
    {
        sum3 = sum3 + ar[i][2];
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}