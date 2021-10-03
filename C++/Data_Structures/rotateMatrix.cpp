void Solution::rotate(vector<vector<int> > &A) {

    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap(A[i][j], A[j][i]);
    }



    int li = 0;
    int ri = A[0].size() - 1;
    while (li < ri)
    {
        for (int i = 0; i < n; i++)
        {
            swap(A[i][li], A[i][ri]);
        }

        li++;
        ri--;
    }


}
