void nextComb(int left, int n, int k, vector<int> comb, vector<vector<int> > &ans) {
	if (comb.size() == k) {
		ans.push_back(comb);
		return;
	}

	for (int i = left; i <= n; i++) {
		if (comb.size() < k) {
			comb.push_back(i);
			nextComb(i + 1, n, k, comb, ans);

			comb.pop_back();
		}
	}
}

vector<vector<int> > Solution::combine(int n, int k) {
	vector<int> comb;
	vector<vector<int> > ans;
	nextComb(1, n, k, comb, ans);
	return ans;
}

//or

void combinations(vector<vector<int>> &ans, vector<int> t, int i, int N, int K) {
	if (K == 0) {
		ans.push_back(t);
		return;
	}
	if (i > N) return;
	t.push_back(i);
	combinations(ans, t, i + 1, N, K - 1);
	t.pop_back();
	combinations(ans, t, i + 1, N, K);
}

vector<vector<int> > Solution::combine(int A, int B) {
	vector<vector<int>> ans;
	combinations(ans, vector<int>(), 1, A, B);
	return ans;
}
