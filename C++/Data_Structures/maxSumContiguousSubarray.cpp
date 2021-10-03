int Solution::maxSubArray(const vector<int> &A) {

    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        currSum += A[i];
        if (currSum > maxSum)
            maxSum = currSum;
        if (currSum < 0)
            currSum = 0;


    }
    return maxSum;

}