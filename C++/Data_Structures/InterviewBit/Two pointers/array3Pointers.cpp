int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
	int n1 = A.size(), n2 = B.size(), n3 = C.size();
	int i = 0, j = 0, k = 0;

	int curr = 0;
	int currMin = INT_MAX;

	int a, b , c;
	while (i < n1 && j < n2 && k < n3) {

		a = A[i];

		b = B[j];

		c = C[k];

		int m1 = abs(a - b);
		int m2 = abs(b - c);
		int m3 = abs(c - a);
		curr = max(max(m1, m2), m3);
		if (curr < currMin)
			currMin = curr;

		if (m1 == curr)
		{
			if (A[i] < B[j])
				i++;

			else
				j++;
		}

		else if (m2 == curr)
		{
			if (B[j] < C[k])
				j++;
			else
				k++;
		}

		else
		{
			if (C[k] < A[i])
				k++;

			else
				i++;
		}

	}
	return currMin;


}