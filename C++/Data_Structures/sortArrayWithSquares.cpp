vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> ans;

    if (n == 1)
    {
        A[0] *= A[0];
        return A;
    }

    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0) {
            left = i;
            break;
        }
    }

    right = left;

    if (left == -1)
    {
        reverse(A.begin(), A.end());
        for (int i = 0; i < n; i++)
            A[i] *= A[i];

        return A;
    }

    if (left - 1 >= 0)
        left--;

    else if (right < n - 1)
        right++;

    while (left >= 0 && right < n)
    {

        if (A[left] * A[left] < A[right] * A[right]) {
            ans.push_back(A[left] * A[left]);
            left--;
        }

        else
        {
            ans.push_back(A[right] * A[right]);
            right++;
        }

    }

    if (left < 0)
    {
        while (right < n)
        {
            ans.push_back(A[right] * A[right]);
            right++;
        }
    }

    else if (right >= n)
    {
        while (left >= 0)
        {
            ans.push_back(A[left] * A[left]);
            left--;
        }
    }

    return ans;
}
