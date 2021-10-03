int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> leftOdd(n, 0); //prefix odd sum 0 till i - 1
    vector<int> leftEven(n, 0); // prefix even sum 0 till i - 1
    vector<int> rightOdd(n, 0); // suffix even sum n - 1 till i + 1
    vector<int> rightEven(n, 0); // suffix even sum n-1 till i + 1
    int lESum = 0;
    int lOSum = 0;
    int rESum = 0;
    int rOSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            lOSum += A[i];
            leftOdd[i] += lOSum;

        }

        else
        {
            lESum += A[i];
            leftEven[i] += lESum;;

        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2)
        {
            rOSum += A[i];
            rightOdd[i] += rOSum;

        }

        else
        {
            rESum += A[i];
            rightEven[i] += rESum;
        }
    }
    int count = 0;
    int lO, lE, rE, rO;

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            lO = i - 2 < 0 ? 0 : leftOdd[i - 2];
            rE = i + 1 >= n ? 0 : rightEven[i + 1];
            lE = i - 1 < 0 ? 0 : leftEven[i - 1];
            rO = i + 2 >= n ? 0 : rightOdd[i + 2];


        }

        else
        {
            lO = i - 1 < 0 ? 0 : leftOdd[i - 1];
            rE = i + 2 >= n ? 0 : rightEven[i + 2];
            lE = i - 2 < 0 ? 0 : leftEven[i - 2];
            rO = i + 1 >= n ? 0 : rightOdd[i + 1];


        }



        if (lO + rE == lE + rO)
            count++;

    }

    return count;

}