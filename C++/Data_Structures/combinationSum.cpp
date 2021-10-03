void nextComb(int left, int sum, vector<int> A, int B, vector<int> comb, vector<vector<int> > &ans) {


	if (sum == B) {
		ans.push_back(comb);
		return;
	}

	for (int i = left; i < A.size(); i++) {
		if (i > left && A[i] == A[i - 1])
			continue;
		if (sum + A[i] <= B) {
			comb.push_back(A[i]);
			sum += A[i];

			//pick unlimited times
			nextComb(i, sum, A, B, comb, ans);

			comb.pop_back();
			sum -= A[i];
		}
	}
}



vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
	sort(A.begin(), A.end());
	vector<vector<int> > ans;
	nextComb(0, 0, A, B, vector<int> (), ans);
	return ans;
}




