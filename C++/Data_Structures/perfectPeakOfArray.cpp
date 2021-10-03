int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();

    if (n < 3)
        return 0;

    vector<int> leftMax(n, INT_MIN);
    vector<int> rightMin(n, INT_MAX);

    int currMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > currMax)
            currMax = A[i];

        leftMax[i] = currMax;
    }

    int currMin = INT_MAX;

    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] < currMin)
            currMin = A[i];

        rightMin[i] = currMin;
    }


    for (int i = 1; i < n - 1; i++)
    {
        if ((A[i] > leftMax[i - 1]) && (A[i] < rightMin[i + 1]))
            return 1;
    }

    return 0;

}
