// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool isSubSequence(string B, string A)
    {
        // code here

        //ITERATIVE SOLUTION
        // int n1 = B.length();
        // int n2 = A.length();
        // int j = 0;
        // for (int i = 0; i < n2; i++)
        // {
        //     if (A[i] == B[j])
        //         j++;
        //     if (j == n1)
        //         return true;
        // }
        // return false;
        return isSubSequence(A, B, A.length(), B.length());
    }
    bool isSubSequence(string A, string B, int n, int m)
    {
        //RECURSIVE SOLUTION
        if (m == 0)
            return true;
        if (n == 0)
            return false;
        if (A[n - 1] == B[m - 1])
            return isSubSequence(A, B, n - 1, m - 1);
        else
            return isSubSequence(A, B, n - 1, m);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        if (ob.isSubSequence(A, B))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
// } Driver Code Ends