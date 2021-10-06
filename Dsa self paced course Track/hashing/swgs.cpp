// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, int s)
    {
        // Your code here
        vector<int> v;
        long long sum = 0;
        int i = 0, j = 0;
        while (i <= n)
        {
            if (sum < x)
                sum += arr[i++];
            else if (sum > x)
                sum -= arr[j++];

            if (sum == x)
            {
                v.push_back(j + 1);
                v.push_back(i);
                return v;
            }
        }
        v.push_back(-1);
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends