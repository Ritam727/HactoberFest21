int Solution::solve(vector<vector<int> > &A, int B) {

// int solve(vector<vector<int> > &A, int B) {
    int N = A.size();
    // vector<int> vertical(N,0);
    vector<vector<int> > horizontal(N, vector<int> (N, 0));
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum = 0;

        for (int j = 0; j < N; j++)
        {
            sum += A[i][j];
            horizontal[i][j] = sum;
        }
    }

    //horizontal contains sum of rows prefix

    // for(int j = 0; j < N; j++)
    // {

    //     for(int i = 0; i < N; i++)
    //     {
    //         cout<<horizontal[j][i]<<" ";
    //     }

    //     cout<<endl;
    // }


    sum = 0;
    int maxSum = INT_MIN;
    for (int j = 0; j <= N - B; j++)
    {
        sum = 0;
        for (int i = 0; i <= N - B; i++)
        {

            if (!i)
            {
                int row = 0;
                while (row < B)
                {
                    if (j - 1 < 0)
                    {
                        sum += horizontal[i + row][j + B - 1];
                    }
                    else
                    {
                        sum += horizontal[i + row][j + B - 1] - horizontal[i + row][j - 1];

                    }
                    row++;
                }

                if (sum > maxSum)
                    maxSum = sum;


                continue;
            }

            if (j - 1 < 0)
            {
                sum -= horizontal[i - 1][j + B - 1];
                sum += horizontal[i + B - 1][j + B - 1];

            }


            else
            {
                sum -= horizontal[i - 1][j + B - 1] - horizontal[i - 1][j - 1];
                sum += horizontal[i + B - 1][j + B - 1] - horizontal[i + B - 1][j - 1];
            }






            // int row = 0;

            // while(row < B)
            // {
            //     if(j - 1 < 0)
            //     {
            //         sum += horizontal[i+row][j+B-1];
            //     }
            //     else
            //     {
            //         sum += horizontal[i+row][j+B-1] - horizontal[i+row][j-1];

            //     }
            //      row++;
            // }

            if (sum > maxSum)
                maxSum = sum;

            // sum = 0;

        }
    }

    return maxSum;


}