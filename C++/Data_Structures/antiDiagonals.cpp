vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int> > v(2 * (n - 1) + 1);
    int count = 0;
    int c = 0;
    // while(count <= (2 * (n - 1)))
    // {
    //     c = 0;
    //     for(int i = 0; i < n; i++)
    //     {
    //         for(int j = 0; j < n; j++)
    //         {
    //             if(i + j == count){
    //                 v[count].push_back(A[i][j]);
    //                 c++;
    //                 if(count <= n - 1){
    //                     if(c >= count + 1)
    //                         break;
    //                 }else{
    //                     if(c + count == 2 * (n - 1) + 1)
    //                         break;
    //                 }
    //             }
    //         }

    //           if(count <= n - 1){
    //                     if(c >= count + 1)
    //                         break;
    //                 }else{
    //                     if(c + count == 2 * (n - 1) + 1)
    //                         break;
    //                 }

    //     }

    //     count++;
    // }

    for (int col = 0; col < n; col++)
    {
        int j = col;
        int i = 0;
        while (j >= 0 && i < n)
        {
            v[col].push_back(A[i][j]);
            j--;
            i++;

        }
    }

    for (int row = 1; row < n; row++)
    {
        int j = n - 1;
        int i = row;
        while (j >= 0 && i < n)
        {
            v[row + n - 1].push_back(A[i][j]);
            j--;
            i++;

        }

    }



    return v;

}
