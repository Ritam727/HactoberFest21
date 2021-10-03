vector<int> Solution::flip(string A) {
    //1 based indexing
    int n = A.size();
    int start = 0, end = -1;
    int sum = 0, maxSum = INT_MIN;
    int ansStart = 0, ansEnd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '1')
            sum--;

        else
            sum++;

        if (sum < 0)
        {
            start = i + 1;
            sum = 0;
        }
        else
        {
            if (sum > maxSum)
            {
                maxSum = sum;
                ansStart = start + 1;
                ansEnd = i + 1;
            }
        }
    }
    vector<int> ans;
    if (ansEnd == INT_MAX)
        return ans;


    ans.push_back(ansStart);
    ans.push_back(ansEnd);

    return ans;
}
