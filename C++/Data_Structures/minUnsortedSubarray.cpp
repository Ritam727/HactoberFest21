vector<int> Solution::subUnsort(vector<int> &A) {
    int start = -1, end = -1;
    vector<int> v(1, -1);
    int n = A.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1]) {
            start = i;
            break;
        }
    }

    if (start == -1)
        return v;

    for (int i = n - 1; i > 0; i--)
    {
        if (A[i] < A[i - 1])
        {
            end = i;
            break;
        }
    }

    int small = INT_MAX;
    int great = INT_MIN;
    for (int i = start; i <= end; i++)
    {
        small = min(small, A[i]);
        great = max(great, A[i]);
    }



    start = INT_MAX;
    end = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > small)
        {
            start = min(i, start);

        }

        if (A[n - 1 - i] < great)
        {
            end = max(n - 1 - i, end);
        }
    }

    v.clear();
    v.push_back(start);
    v.push_back(end);

    return v;

}
