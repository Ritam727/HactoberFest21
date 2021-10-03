void nextSwap(string &ans, string A, int k) {
	int n = A.size();

	if (!k) {
		if (ans.empty() || ans < A)
			ans = A;

		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			swap(A[i], A[j]);
			nextSwap(ans, A, k - 1);

			swap(A[i], A[j]);
		}
	}
}

string Solution::solve(string A, int B) {
	string s = "";
	nextSwap(s, A, B);
	return s;
}