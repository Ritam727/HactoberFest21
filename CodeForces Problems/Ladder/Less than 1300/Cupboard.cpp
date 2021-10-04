#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    int leftclosed = 0, leftopen = 0, rightclosed = 0, rightopen = 0;
    int left, right;
    while (n--)
    {
        cin >> left >> right;
        if (left == 1)
        {
            leftopen++;
        }
        else if (left == 0)
        {
            leftclosed++;
        }
        if (right == 1)
        {
            rightopen++;
        }
        else if (right == 0)
        {
            rightclosed++;
        }
        
    }

    int result = 0;

    result = min(leftclosed, leftopen) + min(rightclosed, rightopen);
    cout << result;
    return 0;
}