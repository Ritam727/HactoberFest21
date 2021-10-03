bool isValid(string t) {
	int i = (t.size() - 1 ) / 2;

	while (i >= 0) {
		if (t[i] != t[t.size() - i - 1])
			return 0;
		i--;
	}

	return 1;
}


void nextPalindrome(string A, vector<string> comb, vector<vector<string> > &ans, int start) {

	if (start == A.size()) {
		ans.push_back(comb);
		return;
	}


	for (int i = start; i < A.size(); i++) {
		string s = A.substr(start, i - start + 1);
		if (isValid(s)) {
			comb.push_back(s);
			nextPalindrome(A, comb, ans, i + 1);

			comb.pop_back();

		}

	}
}


vector<vector<string> > Solution::partition(string A) {

	vector<vector<string> > ans;
	vector<string> comb;
	nextPalindrome(A, comb, ans, 0);
	return ans;
}


