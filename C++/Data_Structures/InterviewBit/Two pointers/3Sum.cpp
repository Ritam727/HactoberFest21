// #define lld long long int

int Solution::threeSumClosest(vector<int> &A, int B) {
	int n = A.size();
	sort(A.begin(), A.end());
	int currDiff = INT_MAX;
	int currAns = 0;
	for (int i = 0; i < n - 2; i++)
	{
		int j = i + 1, k = n - 1;
		while (j < k)
		{
			long long int curr = (long long int)A[i] + (long long int)A[j] + (long long int)A[k];
			long long int diff = abs(curr - B);


			if (diff < currDiff)
				currDiff = diff, currAns = curr;

			if (curr == B)
				return curr;

			else if (curr < B)
				j++;

			else
				k--;


		}


	}
	return currAns;

}
