bool isOpenValid(int openCnt, int closeCnt, int  n) {
	return openCnt < n;
}

bool isCloseValid(int openCnt, int closeCnt, int  n) {
	return openCnt - closeCnt > 0;
}

void nextComb(int openCnt, int closeCnt, string comb, vector<string> &ans, int n) {
	if (comb.size() == 2 * n) {
		ans.push_back(comb);
		return;
	}


	if (isOpenValid(openCnt, closeCnt, n)) {
		comb.push_back('(');
		openCnt++;
		nextComb(openCnt, closeCnt, comb, ans, n);

		comb.pop_back();
		openCnt--;
	}

	if (isCloseValid(openCnt, closeCnt, n)) {
		comb.push_back(')');
		closeCnt++;
		nextComb(openCnt, closeCnt, comb, ans, n);

		comb.pop_back();
		closeCnt--;
	}

}

vector<string> Solution::generateParenthesis(int A) {
	vector<string> ans;
	string comb = "";
	nextComb(0, 0, comb, ans, A);
	return ans;
}
