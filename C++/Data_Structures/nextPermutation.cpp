vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    if (n == 1)
        return A;
    int i = n - 2;
    int res = INT_MAX;
    int pos;
    while (i >= 0 && A[i] >= A[i + 1])
        i--;

    if (i < 0)
    {
        sort(A.begin(), A.end());
        return A;
    }

    for (int j = n - 1; j > i; j--)
    {
        if (A[j] > A[i])
        {
            swap(A[j], A[i]);
            break;
        }
    }
    sort(A.begin() + i + 1, A.end());

    return A;
}



