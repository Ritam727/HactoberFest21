int Solution::titleToNumber(string A) {
	int n = A.size() - 1;
	int ans = 0;
	for (int i = n; i >= 0; i--)
	{
		ans += (A[i] - 'A' + 1) * pow(26, n - i);
	}

	return ans;
}