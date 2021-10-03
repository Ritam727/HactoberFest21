vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> suffix(n, 0);
    int maxx = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        maxx = max(A[i], maxx);
        suffix[i] = maxx;
    }
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] > suffix[i + 1])
            ans.push_back(A[i]);
    }

    ans.push_back(A[n - 1]);

    return ans;
}
