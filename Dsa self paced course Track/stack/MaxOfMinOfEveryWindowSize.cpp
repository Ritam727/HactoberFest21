// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find maximum of minimums of every window size.
    vector<int> maxOfMin(int arr[], int n)
    {
        // Your code here
        stack<int> st;
        unordered_map<int, int> mp;
        int i = 0;
        while (i < n)
        {
            if (st.empty() || arr[st.top()] <= arr[i])
                st.push(i++);
            else
            {
                int x = st.top(), a;
                st.pop();
                if (!st.empty())
                    a = i - st.top() - 1;
                else
                    a = i;
                cout << "([" << arr[x] << "," << x << "]," << a << ") ";
                // if (mp.find(a) != mp.end())
                // {
                //     auto j = mp.find(a);
                //     if (arr[(*j).second] < arr[x])
                //         (*j).second = x;
                // }
                // else
                //     mp.insert({a, x});
            }
        }
        // for (auto i = mp.begin(); i != mp.end(); i++)
        // {
        //     cout << (*i).first << " " << (*i).second << endl;
        // }
        // cout << endl;
        while (!st.empty())
        {
            int x = st.top();
            st.pop();
            int a;
            if (!st.empty())
                a = n - st.top() - 1;
            else
                a = n;
            cout << "([" << arr[x] << "," << x << "]," << a << ") ";
            // if (mp.find(a) != mp.end())
            // {
            //     auto j = mp.find(a);
            //     if (arr[(*j).second] < arr[x])
            //         (*j).second = x;
            // }
            // else
            //     mp.insert({a, x});
        }
        // for (auto i = mp.begin(); i != mp.end(); i++)
        // {
        //     cout << (*i).first << " " << (*i).second << endl;
        // }
        vector<int> v;
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
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        vector<int> res = ob.maxOfMin(a, n);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends