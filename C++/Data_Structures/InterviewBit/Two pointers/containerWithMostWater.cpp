int Solution::maxArea(vector<int> &A) {
	int n = A.size();

	int i = 0, j = n - 1;
	int curr = 0, currMax = INT_MIN;
	while (i < j)
	{
		curr = (j - i) * min(A[i], A[j]);
		if (curr > currMax)
			currMax = curr;

		if (A[i] < A[j])
			i++;

		else
			j--;
	}

	return currMax;
}
