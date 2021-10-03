int Solution::nTriang(vector<int> &A) {
	int n = A.size();
	sort(A.begin(), A.end());

	if (n < 3)
		return 0;

	int MOD = 1e9 + 7;
	int i = n - 1;
	int l = 0, r = i - 1;
	int cnt = 0;
	while (i >= 2)
	{
		l = 0, r = i - 1;
		while (l < r) {
			if (A[l] + A[r] > A[i]) {
				cnt = cnt % MOD +  (r - l) % MOD;
				r--;
			}

			else
				l++;
		}
		i--;
	}

	return cnt % MOD;

}

// or

// int Solution::nTriang(vector<int> &A) {
// 	int n = A.size();
// 	sort(A.begin(), A.end());

// 	if (n < 3)
// 		return 0;

// 	int MOD = 1e9 + 7;
// 	int i = 0, j = 1, k = 2;
// 	int cnt = 0;
// 	while (i < n - 2)
// 	{
// 		j = i + 1;
// 		while (j < n - 1) {
// 			int curr = A[i] + A[j];

// 			cnt = cnt % MOD +  (lower_bound(A.begin(), A.end(), curr) - (A.begin() + j + 1)) % MOD;
// 			j++;
// 		}
// 		i++;
// 	}

// 	return cnt % MOD;

// }

