void Solution::merge(vector<int> &A, vector<int> &B) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int m = A.size();
	int n = B.size();
	A.resize(m + n);

	int i = m - 1, j = n - 1, k = m + n - 1;

	while (i >= 0 && j >= 0)
	{
		if (A[i] < B[j])
		{
			A[k] = B[j];
			j--;
		}
		else
		{
			A[k] = A[i];
			i--;
		}

		k--;
	}

	while (i >= 0)
	{
		A[k] = A[i];
		i--;
		k--;
	}

	while (j >= 0)
	{
		A[k] = B[j];
		j--;
		k--;
	}

	//  while(j >= 0)
	// {
	//     if(i >= 0 and A[i] > B[j])
	//         A[lastPos--] = A[i--];
	//     else
	//         A[lastPos--] = B[j--];
	// }
}
