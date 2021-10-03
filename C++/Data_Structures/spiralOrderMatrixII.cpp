vector<vector<int> > Solution::generateMatrix(int N) {


    vector<vector<int> > v(N, vector<int> (N, 0));

    int t = 0;
    int b = N - 1;

    int l = 0;
    int r = N - 1;

    int dir = 0;

    int i = 0;
    int j = 0;

    int val = 1;
    while (l <= r && t <= b)
    {


        if (dir == 0)
        {
            for (int j = l; j <= r; j++)
            {
                v[t][j] = val++;
            }

            t++;
        }

        if (dir == 1)
        {
            for (int i = t; i <= b; i++)
            {
                v[i][r] = val++;
            }

            r--;
        }

        if (dir == 2)
        {
            for (int j = r; j >= l; j--)
            {
                v[b][j] = val++;
            }

            b--;
        }

        if (dir == 3)
        {
            for (int i = b; i >= t; i--)
            {
                v[i][l] = val++;
            }

            l++;
        }

        dir++;
        dir %= 4;
    }

    return v;

}
