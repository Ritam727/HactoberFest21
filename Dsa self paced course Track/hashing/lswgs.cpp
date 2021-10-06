// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int lenOfLongSubarr(int arr[], int n, int x)
    {
        // Complete the function
        int sa[n];
        int i1=0,i2=0,sum = 0;
        unordered_map<int,int> s;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            sa[i]= sum;
            s.insert(make_pair(sa[i],i));
        }
        int mxl = 0;
        for(int i=0;i<n-1;i++){
            if(s.find(x+sa[i])!=s.end()){
                i1 = i+1;
                i2 = s.find(x+sa[i])->second;
                mxl = max(i2-i1+1,mxl);
            }
            else if(sa[i]==x){
                mxl = max(i+1,mxl);
            }
        }
        if(sa[n-1]==x)
            return n;
        else
            return mxl;
    }
};

// { Driver Code Starts.

int main()
{
    //code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
} // } Driver Code Ends