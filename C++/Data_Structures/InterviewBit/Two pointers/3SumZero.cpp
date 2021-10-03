vector<vector<int> > Solution::threeSum(vector<int> &A) {

	int n = A.size();
	sort(A.begin(), A.end());

	vector<vector<int> > ans;

	for (int j = 0; j < n; j++)
	{

		if (j > 0 && A[j] == A[j - 1])
			continue;

		int i = j + 1, k = n - 1;

		// long long int target = -1;
		// target *= A[j];
		long long int target = (long long) - 1 * (long long)A[j];
		while (i < k)
		{
			long long int curr = (long long)A[i] + (long long)A[k];
			// curr += A[i];
			// curr += A[k];
			if (curr == target)
			{

				vector<int> temp({A[j], A[i], A[k]});

				ans.push_back(temp);

				temp.clear();
				while (i < k && A[i] == A[i + 1])
					i++;

				while (k > i && A[k] == A[k - 1])
					k--;
				i++;
				k--;
			}
			else if (curr > target)
				k--;
			else
				i++;
		}



	}

	return ans;
}