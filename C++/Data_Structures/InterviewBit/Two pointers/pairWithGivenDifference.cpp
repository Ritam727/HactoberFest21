int Solution::solve(vector<int> &A, int B) {

	sort(A.begin(), A.end());
	int i = 0, j = 1;
	while (j < A.size() && i < A.size())
	{
		int curr = A[j] - A[i];

		if (curr == B)
			return 1;

		if (curr < B)
			j++;
		else
			i++;
	}

	return 0;

}

// or

// unordered_map<int, int> mp;
// for (int x : A)
// 	mp[x]++;

// for (int x : A)
// {
// 	if (mp.find(x + B) != mp.end() || mp.find(x - B) != mp.end())
// 	{
// 		if (B == 0 && mp[x] > 1)
// 			return 1;

// 		else if (B)
// 			return 1;

// 	}
// }

// return 0;



