// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n)
    {
        // code here
        int sum = 0,res = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr1[i] - arr2[i];
            if (sum == 0)
                res = max(res, i + 1);
            else if (m.find(sum) != m.end())
                res = max(res, i - m[sum]);
            else
                m[sum] = i;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends