#include <bits/stdc++.h>
using namespace std;

long long int fence (long long int height[], long long int k, long long int n)
{
    long long int ans = 0;

    int min = INT_MAX;
    int sum = 0;
    int i = 0, p=0;
    while (i<k)
    {
        sum+=height[i]; 
        i++; 
    }
    if (sum<=min)
    {
        min = sum;
        ans = p;
    }
    
    while (i!=n)
    {
        sum += height[i];
        sum -= height[p];
        p+=1;
        i+=1;
        if (sum < min)
        {
            min = sum;
            ans = p;
        }
    }

    return ans+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;
    long long int height [n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << fence(height, k, n);
    return 0;
}