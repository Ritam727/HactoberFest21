int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();

    if (n < 2)
        return 0;

    int maxx = *max_element(A.begin(), A.end());
    int minn = *min_element(A.begin(), A.end());

    vector<int> maximum(n + 1, INT_MIN);
    vector<int> minimum(n + 1, INT_MAX);

    long long int idx = 0;
    double width = (double) (maxx - minn) / (double) n + 1;

    for (int i = 0; i < n; i++)
    {

        if (A[i] == maxx || A[i] == minn)
            continue;
        idx = (A[i] - minn) / width;

        if (maximum[idx] < A[i])
            maximum[idx] = A[i];

        if (minimum[idx] > A[i])
            minimum[idx] = A[i];
    }

    int gap = 0;
    int maxGap = INT_MIN;

    int prevMax = minn;

    for (int i = 0; i < n + 1; i++)
    {
        if (maximum[i] == INT_MIN)
            continue;

        gap = minimum[i] - prevMax;
        if (gap > maxGap)
            maxGap = gap;

        prevMax = maximum[i];
    }

    if (maxx - prevMax > maxGap)
        maxGap = maxx - prevMax;

    return maxGap;


}
