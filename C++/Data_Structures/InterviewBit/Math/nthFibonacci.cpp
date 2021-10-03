#define MOD 1000000007
vector<vector<long long int> > mul(vector<vector<long long int> > mat1, vector<vector<long long int> > mat2)
{
	vector<vector<long long int> > result(2, vector<long long int> (2, 0));


	for (long long int i = 0; i < 2 ; i++)
	{
		for (long long int j = 0; j < 2; j++)
		{
			for (long long int k = 0; k < 2; k++)

				result[i][k] += ((mat1[i][j] % MOD) * (mat2[j][k] % MOD)) % MOD;

		}
	}

	for (long long int i = 0; i < 2; i++)
	{
		for (long long int j = 0; j < 2; j++)
			result[i][j] %= MOD;
	}

	return result;
}

vector<vector<long long int> > powerr(vector<vector<long long int> > mat, long long int A)
{
	vector<vector<long long int> > res(2, vector<long long int> (2, 0));
	res = {{1, 0}, {0, 1}};

	while (A)
	{
		if (A & 1)
			res = mul(res, mat);

		mat = mul(mat, mat);
		A >>= 1;

	}

	return res;
}

int Solution::solve(int A) {


	vector<vector<long long int> > mat(2, vector<long long int> (2, 0));

	mat = {{1, 1}, {1, 0}};

	return powerr(mat, A - 1)[0][0] % MOD;
}