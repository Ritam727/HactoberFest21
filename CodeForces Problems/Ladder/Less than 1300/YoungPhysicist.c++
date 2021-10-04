#include <iostream>
using namespace std;

int main()
{
    int sum1{}, sum2{}, sum3{};
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 and sum2 == 0 and sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}
