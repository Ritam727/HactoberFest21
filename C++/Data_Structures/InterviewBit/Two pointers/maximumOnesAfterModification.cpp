int Solution::solve(vector<int> &A, int B) {
	int n = A.size();

	int i = 0;
	int currLen = 0, len = INT_MIN;
	int cnt = 0;
	for (int j = 0; j < n; j++)
	{

		if (!A[j])
			cnt++;

		while (cnt > B)
		{
			if (!A[i])
				cnt--;

			i++;

		}

		currLen = j - i + 1;
		len = max(len, currLen);

	}

	return len;
}
