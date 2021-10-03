int getLowerBound(set<int> &leftMax, int A)
{
    auto it = leftMax.lower_bound(A);
    it--;
    return *it;
}

int Solution::solve(vector<int> &A) {

    if (A.size() < 3)
        return 0;

    int maxx = INT_MIN;
    vector<int> suffixMax(A.size(), 0);
    for (int i = A.size() - 1; i >= 0; i--)
    {
        maxx = max(A[i], maxx);
        suffixMax[i] = maxx;
    }

    set<int> leftMax;
    leftMax.insert(A[0]);
    int sum = 0;

    for (int i = 1; i < A.size() - 1; i++)
    {
        if (A[i] < suffixMax[i + 1])
        {

            leftMax.insert(A[i]);
            sum = max(sum, A[i] + suffixMax[i + 1] + getLowerBound(leftMax, A[i]));

        }
    }

    return sum;
}