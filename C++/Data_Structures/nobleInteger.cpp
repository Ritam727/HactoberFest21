int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == n - i - 1)
        {
            if (A[i + 1] != A[i])
                return 1;
        }

    }

    return -1;
}
