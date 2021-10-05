// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
        //Your code here
        if(n==1)
        return 1;
        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(a[i]);
        int res = 0, count = 1;
        for (auto i = ++s.begin(); i != s.end(); i++)
        {
            auto j = i;
            --j;
            if (*i == *j+1)
                count++;
            else
                count = 1;
            res = max(res, count);
        }
        return res;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends