void nextComb(int left, int sum, vector<int> A, int B, vector<int> comb, vector<vector<int> > &ans) {


	if (sum == B) {
		ans.push_back(comb);
		return;
	}

	// if (sum == B) {
	// 	if (ans.empty())
	// 		ans.push_back(comb);

	// 	else if (ans[ans.size() - 1] != comb)
	// 		ans.push_back(comb);


	// 	return;
	// }

	for (int i = left; i < A.size(); i++) {
		// This will take once and skip duplicate entries
		if (i > left && A[i] == A[i - 1])
			continue;
		if (sum + A[i] <= B) {
			comb.push_back(A[i]);
			sum += A[i];

			nextComb(i + 1, sum, A, B, comb, ans);

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




