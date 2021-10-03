void nextComb(int curr, vector<string> mp, string iAns, vector<string> &ans, string A) {

	if (curr >= A.size()) {
		ans.push_back(iAns);
		return;
	}

	for (int i = 0; i < mp[A[curr] - '0'].size(); i++) {
		iAns.push_back(mp[A[curr] - '0'][i]);
		nextComb(curr + 1, mp, iAns, ans, A);

		iAns.pop_back();
	}
}


vector<string> Solution::letterCombinations(string A) {
	vector<string> mp(10);

	mp[0] = "0";
	mp[1] = "1";
	mp[2] = "abc";
	mp[3] = "def";
	mp[4] = "ghi";
	mp[5] = "jkl";
	mp[6] = "mno";
	mp[7] = "pqrs";
	mp[8] = "tuv";
	mp[9] = "wxyz";

	vector<string> ans;
	string iAns;
	nextComb(0, mp, iAns, ans, A);
	return ans;
}
