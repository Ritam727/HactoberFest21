vector<int> Solution::maxset(vector<int> &A) {
    vector<int> res;
    long long int currSum = 0;
    long long int maxSum = -1;
    long long int start = 0;
    long long int end = -1;
    long long int maxStart = 0;
    long long int maxEnd = -1;

    for (int i = 0; i < A.size(); i++)
    {

        if (A[i] < 0)
        {
            currSum = 0;
            start = i + 1;
            end = i;
            continue;
        }
        else
        {
            currSum += A[i];
            end++;
        }

        if ((currSum > maxSum) || ((currSum == maxSum) && ((maxEnd - maxStart) < (end - start))))
        {
            maxStart = start;
            maxEnd = end;
            maxSum = currSum;
        }
    }




    for (int i = maxStart; i <= maxEnd; i++)
        res.push_back(A[i]);

    return res;
}





