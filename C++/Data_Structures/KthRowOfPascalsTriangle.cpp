vector<int> nCr(int n) {
    vector<int>  dp(n + 1, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] * i;
    }
    return dp;
}

vector<int> Solution::getRow(int k) {
    vector<int> dp = nCr(k);

    vector<int> ans;

    for (int i = 1; i <= r ; i++) {
        int nCr = 1;
        nCr *= (k - i) /
               nCr = dp[k];
        nCr /= dp[i] * dp[k - i];

        ans.push_back(nCr);

    }

    return ans;
}


//or

a = 1;
for (int i = 1; i <= k; i++) {
    a = (a * (k - i + 1)) / i;
    ans.push_back(a);
}