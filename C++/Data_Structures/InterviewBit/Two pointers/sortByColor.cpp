void Solution::sortColors(vector<int> &A) {
	int r = 0, b = A.size() - 1;

	int i = 0;
	while (i < A.size())
	{
		if (!A[i])
			swap(A[r++], A[i++]);

		else if (A[i] == 2)
			swap(A[b--], A[i]);

		else
			i++;
	}
}
