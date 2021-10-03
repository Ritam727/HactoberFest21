vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int l = 0;
    int r = A[0].size();
    int t = 0;
    int b = A.size();

    int dir = 0;

    vector<int> res;

    while (l < r && t < b)
    {
        if (dir == 0)
        {
            for (int i = l; i < r; i++)
            {
                res.push_back(A[t][i]);
            }
            t++;
        }
        if (dir == 1)
        {
            for (int i = t; i < b; i++)
            {
                res.push_back(A[i][r]);
            }
            r--;
        }
        if (dir == 2)
        {
            for (int i = r - 1; i >= l; i--)
            {
                res.push_back(A[b][i]);
            }
            b--;
        }
        if (dir == 3)
        {
            for (int i = b - 1; i >= t; i--)
            {
                res.push_back(A[i][l]);

            }
            l++;
        }

        dir++;
        dir %= 4;
    }

    return res;
}
