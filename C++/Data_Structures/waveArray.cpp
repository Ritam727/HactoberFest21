vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<int> ans;

    int n = A.size();
    if (n == 1)
        return A;

    for (int i = 1; i < n; i += 2)
    {
        ans.push_back(A[i]);
        ans.push_back(A[i - 1]);
    }

    if (ans.size() != n)
        ans.push_back(A[n - 1]);

    return ans;
}
