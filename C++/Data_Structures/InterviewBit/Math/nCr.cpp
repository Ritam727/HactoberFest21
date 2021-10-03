vector<vector<int>> dp(101, vector<int> (101,-1));

int nCr(int n, int r){
	if(r > n)
		return 0;

	if(r == 0 || n == 1)
		return 1;

	if(dp[n][r] != -1)
		return dp[n][r];

	return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}