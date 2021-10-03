#define MOD 1000000007

int Solution::hammingDistance(const vector<int> &A) {
	long long int n = A.size();
	long long int ans = 0;
	long long int curr = 0;

	for (long long int i = 0; i < 32; i++)
	{
		curr = 0;
		for (long long int j = 0; j < n; j++)
		{
			if (A[j] & (1 << i))
				curr++;
		}

		ans += (2 * curr * (n - curr)) % MOD;  //One from X and one from Y contributes 1. Pairwise 2XY

	}

	return ans % MOD;
}