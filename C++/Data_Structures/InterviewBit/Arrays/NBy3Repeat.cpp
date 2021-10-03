int Solution::repeatedNumber(const vector<int> &A) {

    int n = A.size();
    int a = A[0];
    int b = A[1];
    int cntA = 0;
    int cntB = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == a)
            cntA++;

        else if (A[i] == b)
            cntB++;

        else if (!cntA)
        {
            cntA++;
            a = A[i];

        }

        else if (!cntB)
        {
            cntB++;
            b = A[i];
        }

        else
        {
            cntA--;
            cntB--;
        }

    }

    cntA = cntB = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == a)
            cntA++;

        if (A[i] == b)
            cntB++;
    }

    if (cntA > n / 3)
        return a;

    if (cntB > n / 3)
        return b;

    return -1;


}