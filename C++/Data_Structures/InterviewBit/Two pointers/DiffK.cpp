int Solution::diffPossible(vector<int> &A, int B) {

	int n = A.size();
	int i = 0, j = 1;

	while (i < n && j < n)
	{
		int curr = A[j] - A[i];
		if (curr == B && B != 0)
			return 1;

		else if (curr == B && B == 0 && i != j)
			return 1;

		else if (curr < B)
			j++;

		else
			i++;
	}

	return 0;
}
