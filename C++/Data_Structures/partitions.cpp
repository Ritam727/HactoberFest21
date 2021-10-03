int Solution::solve(int A, vector<int> &B) {
    int sum = 0;
    int n = B.size();
    vector<int> suffix(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        sum += B[i];
        suffix[i] = sum;
    }

    if (sum % 3)
        return 0;

    vector<int> count(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (suffix[i] == sum / 3)
            count[i] = 1;
    }

    for (int i = n - 2; i >= 0; i--)
        count[i] += count[i + 1];


    int currSum = 0;
    int ans = 0;
    for (int i = 0; i <= n - 3; i++)
    {
        currSum += B[i];
        if (currSum == sum / 3)
        {
            ans += count[i + 2];
        }
    }


    return ans;

}

//or

int Solution::solve(int A, vector<int> &B) {
    int sum = 0;
    int n = B.size();
    vector<int> prefix(n, 0);
    for (int i = 0; i < n; i++)
    {
        sum += B[i];
        prefix[i] = sum;
    }

    if (sum % 3)
        return 0;

    int count = 0;

    for (int i = 0; i <= n - 3; i++)
    {
        if (prefix[i] == sum / 3)
        {
            for (int j = i + 1; j <= n - 2; j++)
            {
                if (prefix[j] == (2 * sum) / 3)
                {

                    if (prefix[n - 1] == sum )
                        count++;

                }
            }
        }
    }

    return count;
}