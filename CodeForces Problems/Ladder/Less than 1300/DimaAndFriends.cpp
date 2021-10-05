#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, finger;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> finger;
        sum+=finger;
    }
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((sum+i)%(n+1)!= 1)
        {
            count+=1;
        }   
    }
    cout << count;
    return 0;
}