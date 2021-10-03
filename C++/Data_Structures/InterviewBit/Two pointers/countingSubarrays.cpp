int Solution::solve(vector<int> &A, int B) {

	int n = A.size();
	int sum = 0, cnt = 0;

	int i = 0, j = 0;

	while (j < n) {

		sum += A[j];

		while (sum >= B)
			sum -= A[i], i++;

		cnt += j - i + 1;
		j++;

	}
	return cnt;
}
// or

// int Solution::solve(vector<int> &A, int B) {

// 	int n = A.size();
// 	int sum = 0, cnt = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		sum = 0;
// 		for (int j = i; j < n; j++)
// 		{
// 			sum += A[j];
// 			if (sum < B)
// 				cnt++;

// 			else
// 				break;
// 		}
// 	}

// 	return cnt;
// }
