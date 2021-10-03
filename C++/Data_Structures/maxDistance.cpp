int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<int> v(n);
    v[n - 1] = A[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        v[i] = max(A[i], v[i + 1]);
    }

    int curr = 0;
    int maxx = INT_MIN;

    int i = 0;
    int j = 0;

    while (i < n && j < n)
    {
        if (A[i] <= v[j])
        {
            curr = j - i;
            if (curr > maxx)
                maxx = curr;

            j++;
        }

        else
            i++;
    }

    if (maxx == INT_MIN)
        return 0;
    return maxx;

}


//or

// sort
// and store original index and maintain suffix array for orignal index


// arr   3 5 4 2
// idx   0 1 2 3

// sAr   2 3 4 5
// oId   3 0 2 1
// sId   3 2 2 1

