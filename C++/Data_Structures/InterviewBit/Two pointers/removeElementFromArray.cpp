int Solution::removeElement(vector<int> &A, int B) {

	int n = A.size();
	int i = 0, j = 0;

	while (j < n)
	{
		if (A[j] != B)
		{
			swap(A[i], A[j]);
			i++, j++;

		}

		else
			j++;


	}
	return i - 1;
}