#define MOD 1000003

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;

	int dp[n + 1];
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; i++)
		dp[i] = ((i % MOD) * (dp[i - 1] % MOD)) % MOD;

	return dp[n];
}

int Solution::findRank(string A) {

	//range of charecter set 0-255
	vector<bool> present(256, 0);

	int n = A.size();
	int ans = 0;

	for (int i = 0; i < n; i++)
		present[A[i]] = 1;

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 256; j++)
		{
			if (j == A[i])
				break;

			if (present[j])
				cnt++;
		}



		ans += ((cnt % MOD) * (factorial(n - i - 1) % MOD)) % MOD;
		present[A[i]] = 0;
	}

	return (ans + 1) % MOD;


}
