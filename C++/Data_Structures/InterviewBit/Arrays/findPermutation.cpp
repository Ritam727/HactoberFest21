vector<int> Solution::findPerm(const string A, int B) {
    int low = 1;
    int high = B;

    vector<int> res(B);
    int i = 0;
    for (i; i < A.size(); i++)
    {
        if (A[i] == 'I')
            res[i] = low++;

        else
            res[i] = high--;
    }

    res[i] = low;

    return res;
}

